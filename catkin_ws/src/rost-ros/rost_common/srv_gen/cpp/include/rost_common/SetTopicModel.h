/* Auto-generated by genmsg_cpp for file /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_common/srv/SetTopicModel.srv */
#ifndef ROST_COMMON_SERVICE_SETTOPICMODEL_H
#define ROST_COMMON_SERVICE_SETTOPICMODEL_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

#include "rost_common/TopicModel.h"



namespace rost_common
{
template <class ContainerAllocator>
struct SetTopicModelRequest_ {
  typedef SetTopicModelRequest_<ContainerAllocator> Type;

  SetTopicModelRequest_()
  : topic_model()
  {
  }

  SetTopicModelRequest_(const ContainerAllocator& _alloc)
  : topic_model(_alloc)
  {
  }

  typedef  ::rost_common::TopicModel_<ContainerAllocator>  _topic_model_type;
   ::rost_common::TopicModel_<ContainerAllocator>  topic_model;


  typedef boost::shared_ptr< ::rost_common::SetTopicModelRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rost_common::SetTopicModelRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetTopicModelRequest
typedef  ::rost_common::SetTopicModelRequest_<std::allocator<void> > SetTopicModelRequest;

typedef boost::shared_ptr< ::rost_common::SetTopicModelRequest> SetTopicModelRequestPtr;
typedef boost::shared_ptr< ::rost_common::SetTopicModelRequest const> SetTopicModelRequestConstPtr;


template <class ContainerAllocator>
struct SetTopicModelResponse_ {
  typedef SetTopicModelResponse_<ContainerAllocator> Type;

  SetTopicModelResponse_()
  {
  }

  SetTopicModelResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::rost_common::SetTopicModelResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rost_common::SetTopicModelResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct SetTopicModelResponse
typedef  ::rost_common::SetTopicModelResponse_<std::allocator<void> > SetTopicModelResponse;

typedef boost::shared_ptr< ::rost_common::SetTopicModelResponse> SetTopicModelResponsePtr;
typedef boost::shared_ptr< ::rost_common::SetTopicModelResponse const> SetTopicModelResponseConstPtr;

struct SetTopicModel
{

typedef SetTopicModelRequest Request;
typedef SetTopicModelResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SetTopicModel
} // namespace rost_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rost_common::SetTopicModelRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rost_common::SetTopicModelRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rost_common::SetTopicModelRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "187db3e9f87357c36b07f58f4995b9b5";
  }

  static const char* value(const  ::rost_common::SetTopicModelRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x187db3e9f87357c3ULL;
  static const uint64_t static_value2 = 0x6b07f58f4995b9b5ULL;
};

template<class ContainerAllocator>
struct DataType< ::rost_common::SetTopicModelRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/SetTopicModelRequest";
  }

  static const char* value(const  ::rost_common::SetTopicModelRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rost_common::SetTopicModelRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "TopicModel topic_model\n\
\n\
================================================================================\n\
MSG: rost_common/TopicModel\n\
#number of topics\n\
int32 K\n\
\n\
#number of vocabulary words\n\
int32 V\n\
\n\
#Dirichlet prior topic distribution in a cell\n\
float32 alpha\n\
\n\
#Dirichlet prior word distribution in a topic\n\
float32 beta\n\
\n\
#flattened KxV matrix which stores the word distribution for each topic\n\
#phi[k*V + v] is the frequency of vocabulary word <v> in topic <k>\n\
int32[] phi\n\
\n\
#topic_weights[k] is proportional to probability of seeing topic[k]\n\
int32[] topic_weights\n\
\n\
\n\
";
  }

  static const char* value(const  ::rost_common::SetTopicModelRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rost_common::SetTopicModelResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rost_common::SetTopicModelResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rost_common::SetTopicModelResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::rost_common::SetTopicModelResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rost_common::SetTopicModelResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/SetTopicModelResponse";
  }

  static const char* value(const  ::rost_common::SetTopicModelResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rost_common::SetTopicModelResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const  ::rost_common::SetTopicModelResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rost_common::SetTopicModelResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rost_common::SetTopicModelRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.topic_model);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetTopicModelRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rost_common::SetTopicModelResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetTopicModelResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<rost_common::SetTopicModel> {
  static const char* value() 
  {
    return "187db3e9f87357c36b07f58f4995b9b5";
  }

  static const char* value(const rost_common::SetTopicModel&) { return value(); } 
};

template<>
struct DataType<rost_common::SetTopicModel> {
  static const char* value() 
  {
    return "rost_common/SetTopicModel";
  }

  static const char* value(const rost_common::SetTopicModel&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rost_common::SetTopicModelRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "187db3e9f87357c36b07f58f4995b9b5";
  }

  static const char* value(const rost_common::SetTopicModelRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rost_common::SetTopicModelRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/SetTopicModel";
  }

  static const char* value(const rost_common::SetTopicModelRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rost_common::SetTopicModelResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "187db3e9f87357c36b07f58f4995b9b5";
  }

  static const char* value(const rost_common::SetTopicModelResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rost_common::SetTopicModelResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/SetTopicModel";
  }

  static const char* value(const rost_common::SetTopicModelResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ROST_COMMON_SERVICE_SETTOPICMODEL_H

