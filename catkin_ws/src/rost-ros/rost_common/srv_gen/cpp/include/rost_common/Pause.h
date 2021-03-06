/* Auto-generated by genmsg_cpp for file /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_common/srv/Pause.srv */
#ifndef ROST_COMMON_SERVICE_PAUSE_H
#define ROST_COMMON_SERVICE_PAUSE_H
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




namespace rost_common
{
template <class ContainerAllocator>
struct PauseRequest_ {
  typedef PauseRequest_<ContainerAllocator> Type;

  PauseRequest_()
  : pause(false)
  {
  }

  PauseRequest_(const ContainerAllocator& _alloc)
  : pause(false)
  {
  }

  typedef uint8_t _pause_type;
  uint8_t pause;


  typedef boost::shared_ptr< ::rost_common::PauseRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rost_common::PauseRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PauseRequest
typedef  ::rost_common::PauseRequest_<std::allocator<void> > PauseRequest;

typedef boost::shared_ptr< ::rost_common::PauseRequest> PauseRequestPtr;
typedef boost::shared_ptr< ::rost_common::PauseRequest const> PauseRequestConstPtr;


template <class ContainerAllocator>
struct PauseResponse_ {
  typedef PauseResponse_<ContainerAllocator> Type;

  PauseResponse_()
  {
  }

  PauseResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::rost_common::PauseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rost_common::PauseResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PauseResponse
typedef  ::rost_common::PauseResponse_<std::allocator<void> > PauseResponse;

typedef boost::shared_ptr< ::rost_common::PauseResponse> PauseResponsePtr;
typedef boost::shared_ptr< ::rost_common::PauseResponse const> PauseResponseConstPtr;

struct Pause
{

typedef PauseRequest Request;
typedef PauseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Pause
} // namespace rost_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rost_common::PauseRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rost_common::PauseRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rost_common::PauseRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "769db6046968e824fd55099ac609f204";
  }

  static const char* value(const  ::rost_common::PauseRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x769db6046968e824ULL;
  static const uint64_t static_value2 = 0xfd55099ac609f204ULL;
};

template<class ContainerAllocator>
struct DataType< ::rost_common::PauseRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/PauseRequest";
  }

  static const char* value(const  ::rost_common::PauseRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rost_common::PauseRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool pause\n\
\n\
";
  }

  static const char* value(const  ::rost_common::PauseRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rost_common::PauseRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rost_common::PauseResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rost_common::PauseResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rost_common::PauseResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::rost_common::PauseResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rost_common::PauseResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/PauseResponse";
  }

  static const char* value(const  ::rost_common::PauseResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rost_common::PauseResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const  ::rost_common::PauseResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rost_common::PauseResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rost_common::PauseRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.pause);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PauseRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rost_common::PauseResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PauseResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<rost_common::Pause> {
  static const char* value() 
  {
    return "769db6046968e824fd55099ac609f204";
  }

  static const char* value(const rost_common::Pause&) { return value(); } 
};

template<>
struct DataType<rost_common::Pause> {
  static const char* value() 
  {
    return "rost_common/Pause";
  }

  static const char* value(const rost_common::Pause&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rost_common::PauseRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "769db6046968e824fd55099ac609f204";
  }

  static const char* value(const rost_common::PauseRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rost_common::PauseRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/Pause";
  }

  static const char* value(const rost_common::PauseRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rost_common::PauseResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "769db6046968e824fd55099ac609f204";
  }

  static const char* value(const rost_common::PauseResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rost_common::PauseResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/Pause";
  }

  static const char* value(const rost_common::PauseResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ROST_COMMON_SERVICE_PAUSE_H

