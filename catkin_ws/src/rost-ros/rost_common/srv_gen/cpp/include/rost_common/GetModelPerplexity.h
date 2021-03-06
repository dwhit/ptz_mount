/* Auto-generated by genmsg_cpp for file /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_common/srv/GetModelPerplexity.srv */
#ifndef ROST_COMMON_SERVICE_GETMODELPERPLEXITY_H
#define ROST_COMMON_SERVICE_GETMODELPERPLEXITY_H
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
struct GetModelPerplexityRequest_ {
  typedef GetModelPerplexityRequest_<ContainerAllocator> Type;

  GetModelPerplexityRequest_()
  {
  }

  GetModelPerplexityRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::rost_common::GetModelPerplexityRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rost_common::GetModelPerplexityRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetModelPerplexityRequest
typedef  ::rost_common::GetModelPerplexityRequest_<std::allocator<void> > GetModelPerplexityRequest;

typedef boost::shared_ptr< ::rost_common::GetModelPerplexityRequest> GetModelPerplexityRequestPtr;
typedef boost::shared_ptr< ::rost_common::GetModelPerplexityRequest const> GetModelPerplexityRequestConstPtr;


template <class ContainerAllocator>
struct GetModelPerplexityResponse_ {
  typedef GetModelPerplexityResponse_<ContainerAllocator> Type;

  GetModelPerplexityResponse_()
  : perplexity()
  {
  }

  GetModelPerplexityResponse_(const ContainerAllocator& _alloc)
  : perplexity(_alloc)
  {
  }

  typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _perplexity_type;
  std::vector<double, typename ContainerAllocator::template rebind<double>::other >  perplexity;


  typedef boost::shared_ptr< ::rost_common::GetModelPerplexityResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rost_common::GetModelPerplexityResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetModelPerplexityResponse
typedef  ::rost_common::GetModelPerplexityResponse_<std::allocator<void> > GetModelPerplexityResponse;

typedef boost::shared_ptr< ::rost_common::GetModelPerplexityResponse> GetModelPerplexityResponsePtr;
typedef boost::shared_ptr< ::rost_common::GetModelPerplexityResponse const> GetModelPerplexityResponseConstPtr;

struct GetModelPerplexity
{

typedef GetModelPerplexityRequest Request;
typedef GetModelPerplexityResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct GetModelPerplexity
} // namespace rost_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rost_common::GetModelPerplexityRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rost_common::GetModelPerplexityRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rost_common::GetModelPerplexityRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::rost_common::GetModelPerplexityRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::rost_common::GetModelPerplexityRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/GetModelPerplexityRequest";
  }

  static const char* value(const  ::rost_common::GetModelPerplexityRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rost_common::GetModelPerplexityRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::rost_common::GetModelPerplexityRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rost_common::GetModelPerplexityRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rost_common::GetModelPerplexityResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rost_common::GetModelPerplexityResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rost_common::GetModelPerplexityResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "214c0b64b37978075b6c079778199a6a";
  }

  static const char* value(const  ::rost_common::GetModelPerplexityResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x214c0b64b3797807ULL;
  static const uint64_t static_value2 = 0x5b6c079778199a6aULL;
};

template<class ContainerAllocator>
struct DataType< ::rost_common::GetModelPerplexityResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/GetModelPerplexityResponse";
  }

  static const char* value(const  ::rost_common::GetModelPerplexityResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rost_common::GetModelPerplexityResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float64[] perplexity\n\
\n\
";
  }

  static const char* value(const  ::rost_common::GetModelPerplexityResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rost_common::GetModelPerplexityRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetModelPerplexityRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rost_common::GetModelPerplexityResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.perplexity);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetModelPerplexityResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<rost_common::GetModelPerplexity> {
  static const char* value() 
  {
    return "214c0b64b37978075b6c079778199a6a";
  }

  static const char* value(const rost_common::GetModelPerplexity&) { return value(); } 
};

template<>
struct DataType<rost_common::GetModelPerplexity> {
  static const char* value() 
  {
    return "rost_common/GetModelPerplexity";
  }

  static const char* value(const rost_common::GetModelPerplexity&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rost_common::GetModelPerplexityRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "214c0b64b37978075b6c079778199a6a";
  }

  static const char* value(const rost_common::GetModelPerplexityRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rost_common::GetModelPerplexityRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/GetModelPerplexity";
  }

  static const char* value(const rost_common::GetModelPerplexityRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<rost_common::GetModelPerplexityResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "214c0b64b37978075b6c079778199a6a";
  }

  static const char* value(const rost_common::GetModelPerplexityResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<rost_common::GetModelPerplexityResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/GetModelPerplexity";
  }

  static const char* value(const rost_common::GetModelPerplexityResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ROST_COMMON_SERVICE_GETMODELPERPLEXITY_H

