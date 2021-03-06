/* Auto-generated by genmsg_cpp for file /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_common/msg/LocalSurprise1D.msg */
#ifndef ROST_COMMON_MESSAGE_LOCALSURPRISE1D_H
#define ROST_COMMON_MESSAGE_LOCALSURPRISE1D_H
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


namespace rost_common
{
template <class ContainerAllocator>
struct LocalSurprise1D_ {
  typedef LocalSurprise1D_<ContainerAllocator> Type;

  LocalSurprise1D_()
  : seq(0)
  , surprise()
  {
  }

  LocalSurprise1D_(const ContainerAllocator& _alloc)
  : seq(0)
  , surprise(_alloc)
  {
  }

  typedef uint32_t _seq_type;
  uint32_t seq;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _surprise_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  surprise;


  typedef boost::shared_ptr< ::rost_common::LocalSurprise1D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rost_common::LocalSurprise1D_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LocalSurprise1D
typedef  ::rost_common::LocalSurprise1D_<std::allocator<void> > LocalSurprise1D;

typedef boost::shared_ptr< ::rost_common::LocalSurprise1D> LocalSurprise1DPtr;
typedef boost::shared_ptr< ::rost_common::LocalSurprise1D const> LocalSurprise1DConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::rost_common::LocalSurprise1D_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::rost_common::LocalSurprise1D_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace rost_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::rost_common::LocalSurprise1D_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::rost_common::LocalSurprise1D_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::rost_common::LocalSurprise1D_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b3d04bb22caeb50cfaed5d24887be29e";
  }

  static const char* value(const  ::rost_common::LocalSurprise1D_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb3d04bb22caeb50cULL;
  static const uint64_t static_value2 = 0xfaed5d24887be29eULL;
};

template<class ContainerAllocator>
struct DataType< ::rost_common::LocalSurprise1D_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rost_common/LocalSurprise1D";
  }

  static const char* value(const  ::rost_common::LocalSurprise1D_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rost_common::LocalSurprise1D_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint32 seq\n\
float32[] surprise\n\
\n\
";
  }

  static const char* value(const  ::rost_common::LocalSurprise1D_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rost_common::LocalSurprise1D_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.seq);
    stream.next(m.surprise);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LocalSurprise1D_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rost_common::LocalSurprise1D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::rost_common::LocalSurprise1D_<ContainerAllocator> & v) 
  {
    s << indent << "seq: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.seq);
    s << indent << "surprise[]" << std::endl;
    for (size_t i = 0; i < v.surprise.size(); ++i)
    {
      s << indent << "  surprise[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.surprise[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROST_COMMON_MESSAGE_LOCALSURPRISE1D_H

