#include <iostream>
#include <ros/ros.h>
#include <ros/console.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv/highgui.h>
#include <opencv2/imgproc/imgproc.hpp>
using namespace std;
using boost::shared_ptr;
using namespace cv;
namespace enc = sensor_msgs::image_encodings;

int img_width, img_height, rate, subsample, img_x, img_y;
double scale;
image_transport::Publisher pub;

void image_callback(const sensor_msgs::ImageConstPtr& msg)
{
  //std::cerr<<"Received image: "<<msg->header.seq<<endl;                                                                                   
  //  sensor_msgs::CvBridge bridge;
  //  cv::Mat img = bridge.imgMsgToCv(msg, "bgr8");


  cv_bridge::CvImagePtr cv_ptr;
  cv_ptr = cv_bridge::toCvCopy(msg, enc::BGR8);
  cv::Mat img = cv_ptr->image;

  cv::Mat roi(img, Rect(img_x,img_y,img_width,img_height));

  cv_bridge::CvImage cvimg;
  cvimg.encoding = "bgr8";
  cvimg.header.stamp=ros::Time::now();
  cvimg.image = roi;      
  sensor_msgs::ImagePtr cmsg = cvimg.toImageMsg();      
  pub.publish(cmsg);
}


int main(int argc, char*argv[]){
  ros::init(argc, argv, "crop");
  ros::NodeHandle nh("~");

  int cameraid;

  string filename, topic_name, encoding, in, out;

  bool loop;

  nh.param<int>("width", img_width,640);
  nh.param<int>("height", img_height,480);
  nh.param<int>("x_offset", img_x,0);
  nh.param<int>("y_offset", img_y,0);
  nh.param<double>("scale", scale ,1.0);
  nh.param<int>("rate", rate ,30);
  nh.param<string>("in", in ,"/image");
  nh.param<string>("out", out ,"/crop_image");

  image_transport::ImageTransport it(nh);
  pub = it.advertise(out, 1);
  image_transport::Subscriber sub = it.subscribe(in, 1, image_callback);
  sensor_msgs::Image img_msg;
  

  ros::Rate loop_rate(rate);


  while (nh.ok()) {
    ros::spinOnce();
    loop_rate.sleep();
  }

}
