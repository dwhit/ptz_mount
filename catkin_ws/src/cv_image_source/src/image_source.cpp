#include <iostream>
#include <ros/ros.h>
#include <ros/console.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <opencv/highgui.h>
#include <opencv2/imgproc/imgproc.hpp>
#include "std_srvs/Empty.h"
#include "cv_image_source/EndOfStream.h"
using namespace std;
using boost::shared_ptr;
using namespace cv;
bool get_next_image=true;
bool done; // end of stream

bool polling_callback(std_srvs::Empty::Request& request, std_srvs::Empty::Response& response){
  get_next_image=true;
  return true;
}

bool eos_callback(cv_image_source::EndOfStream::Request& request, cv_image_source::EndOfStream::Response& response){
  response.end_of_stream = !done;
  return true;
}


int main(int argc, char*argv[]){
  ros::init(argc, argv, "imgsource");
  ros::NodeHandle nh("~");

  int cameraid;
  int img_width, img_height, rate, subsample;
  double begin_ms, end_ms;
  string filename, topic_name, encoding;
  double scale;
  bool loop, polling, quit_on_eos;
  nh.param<int>("cameraid", cameraid,-1);
  nh.param<int>("width", img_width,0);
  nh.param<int>("height", img_height,0);
  nh.param<int>("rate", rate ,10);
  nh.param<int>("subsample", subsample ,1);
  nh.param<double>("begin", begin_ms ,0.0);
  nh.param<double>("end", end_ms ,-1.0);
  nh.param<double>("scale", scale ,1.0);
  nh.param<string>("filename", filename,"");
  nh.param<string>("topic", topic_name,"/image");
  nh.param<bool>("loop",loop,true);
  nh.param<string>("encoding",encoding,"bgr8");
  nh.param<bool>("polling",polling,false);
  nh.param<bool>("quit_on_eos",quit_on_eos,false);

  begin_ms *=1000.0;
  end_ms *=1000.0;

  image_transport::ImageTransport it(nh);
  image_transport::Publisher pub = it.advertise(topic_name, 1);
  sensor_msgs::Image img_msg;

  cerr<<"Polling = "<<polling<<endl;
  ros::ServiceServer polling_service, eos_service;
  if(polling){    
    polling_service= nh.advertiseService("next", polling_callback);
    get_next_image=false;
    cerr<<"Polling mode. Images will only be briadcasted on request."<<endl;
  }
  else
    get_next_image=true;

  eos_service= nh.advertiseService("end_of_stream", eos_callback);

  ros::Rate loop_rate(rate);
  VideoCapture source;
  bool open_success;
  bool is_loopable=false;

  cerr<<"Source: ";
  if(!filename.empty()){
    open_success = source.open(filename);
    is_loopable=true;
    cerr<<filename<<endl;
  }
  else if(cameraid >=0){
    open_success = source.open(cameraid);
    cerr<<"camera "<<cameraid<<endl;
  }
  else{
    open_success = source.open(0);
    cerr<<"camera 0"<<endl;
  }

  if(open_success)
    cerr<<"Successfully opened video source\n";
  else{
    cerr<<"FAIL!!\n";
    return 0;
  }

  cerr<<"Source info:"<<endl
      <<"  frame width: "<<source.get(CV_CAP_PROP_FRAME_WIDTH)<<endl
      <<"  frame height: "<<source.get(CV_CAP_PROP_FRAME_HEIGHT)<<endl
      <<"  fps: "<<source.get(CV_CAP_PROP_FPS)<<endl;

  cerr<<"Parameters: "<<endl;
  cerr<<"  subsample: "<<subsample<<endl
      <<"  scale: "<<scale<<endl
      <<"  rate: "<<rate<<endl
      <<"  begin: "<<begin_ms/1000.0<<"sec"<<endl
      <<"  end: "<<end_ms/1000.0<<"sec"<<endl;



  
  //if a img width and height was specified then pass that top opencv
  if(img_width>0 && img_height >0){
    cerr<<"  width: "<<img_width<<endl
	<<"  height: "<<img_height<<endl;
    source.set(CV_CAP_PROP_FRAME_WIDTH, static_cast<double>(img_width));
    source.set(CV_CAP_PROP_FRAME_HEIGHT, static_cast<double>(img_height));
  }


  cv_bridge::CvImage cvimg;
  cvimg.encoding = encoding;

  if(begin_ms > 0.01){
    source.set(CV_CAP_PROP_POS_MSEC,begin_ms);
  }

  bool last_done=false;
  while (nh.ok()) {
    if(get_next_image){

      //subsample frames
      for(int i=0;i<subsample;++i){	
	done = ! source.grab();
	if(done)
	  break;
      }

      if(done)
	cerr<<"DONE!"<<endl;

      //if end of stream, and should loop, then loop
      if(done && is_loopable && loop){
	ROS_INFO("Looping back to the beginning");
	//double pos = source.get(CV_CAP_PROP_POS_AVI_RATIO);
	//assert(pos > 0.99);
	source.set(CV_CAP_PROP_POS_AVI_RATIO,0.0);
	done = ! source.grab();
      }

      //user proved end time
      if(end_ms > 0){
	double pos_ms = source.get(CV_CAP_PROP_POS_MSEC);
	if(pos_ms > end_ms){
	  done=true;
	  //	  if(quit_on_eos)
	  //	    ros::shutdown();
	}
      }
    
      //print the EOS message only once
      if(done && !last_done){
	ROS_INFO("End of stream");
	if(quit_on_eos)
	  ros::shutdown();
      }    

      //broadcast the image
      if(!done){	
	cv::Mat img;
	source.retrieve(img);
	
	if(scale < 0.99 || scale > 1.01){
	  cv::Mat imgs;
	  cv::resize(img,imgs,cv::Size(),scale,scale);
	  img=imgs;
	}
	
	cvimg.header.stamp=ros::Time::now();
	cvimg.image = img;      
	sensor_msgs::ImagePtr msg = cvimg.toImageMsg();      
	pub.publish(msg);
	if(polling)
	  get_next_image=false;
      }


    }//end if(get_next_image)
    ros::spinOnce();
    loop_rate.sleep();
    last_done=done;
  }

}
