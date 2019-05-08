/* Auto-generated by genmsg_cpp for file /home/amsl/AMSL_ros_pkg/rwrc15/trajectory_generation/msg/VelocityArray.msg */
#ifndef TRAJECTORY_GENERATION_MESSAGE_VELOCITYARRAY_H
#define TRAJECTORY_GENERATION_MESSAGE_VELOCITYARRAY_H
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

#include "std_msgs/Header.h"
#include "trajectory_generation/Velocity.h"

namespace trajectory_generation
{
template <class ContainerAllocator>
struct VelocityArray_ {
  typedef VelocityArray_<ContainerAllocator> Type;

  VelocityArray_()
  : header()
  , vel()
  , steer_init(false)
  , id_num(0)
  {
  }

  VelocityArray_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , vel(_alloc)
  , steer_init(false)
  , id_num(0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef std::vector< ::trajectory_generation::Velocity_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::trajectory_generation::Velocity_<ContainerAllocator> >::other >  _vel_type;
  std::vector< ::trajectory_generation::Velocity_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::trajectory_generation::Velocity_<ContainerAllocator> >::other >  vel;

  typedef uint8_t _steer_init_type;
  uint8_t steer_init;

  typedef int64_t _id_num_type;
  int64_t id_num;


  typedef boost::shared_ptr< ::trajectory_generation::VelocityArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::trajectory_generation::VelocityArray_<ContainerAllocator>  const> ConstPtr;
}; // struct VelocityArray
typedef  ::trajectory_generation::VelocityArray_<std::allocator<void> > VelocityArray;

typedef boost::shared_ptr< ::trajectory_generation::VelocityArray> VelocityArrayPtr;
typedef boost::shared_ptr< ::trajectory_generation::VelocityArray const> VelocityArrayConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::trajectory_generation::VelocityArray_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::trajectory_generation::VelocityArray_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace trajectory_generation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::trajectory_generation::VelocityArray_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::trajectory_generation::VelocityArray_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::trajectory_generation::VelocityArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "242b16d9523c34027993e0327d9e5d8f";
  }

  static const char* value(const  ::trajectory_generation::VelocityArray_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x242b16d9523c3402ULL;
  static const uint64_t static_value2 = 0x7993e0327d9e5d8fULL;
};

template<class ContainerAllocator>
struct DataType< ::trajectory_generation::VelocityArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "trajectory_generation/VelocityArray";
  }

  static const char* value(const  ::trajectory_generation::VelocityArray_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::trajectory_generation::VelocityArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
\n\
Velocity[] vel\n\
bool steer_init\n\
int64 id_num\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: trajectory_generation/Velocity\n\
Header header\n\
\n\
float32 op_linear\n\
float32 op_angular\n\
int32 id\n\
\n\
";
  }

  static const char* value(const  ::trajectory_generation::VelocityArray_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::trajectory_generation::VelocityArray_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::trajectory_generation::VelocityArray_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::trajectory_generation::VelocityArray_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.vel);
    stream.next(m.steer_init);
    stream.next(m.id_num);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct VelocityArray_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::trajectory_generation::VelocityArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::trajectory_generation::VelocityArray_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "vel[]" << std::endl;
    for (size_t i = 0; i < v.vel.size(); ++i)
    {
      s << indent << "  vel[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::trajectory_generation::Velocity_<ContainerAllocator> >::stream(s, indent + "    ", v.vel[i]);
    }
    s << indent << "steer_init: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.steer_init);
    s << indent << "id_num: ";
    Printer<int64_t>::stream(s, indent + "  ", v.id_num);
  }
};


} // namespace message_operations
} // namespace ros

#endif // TRAJECTORY_GENERATION_MESSAGE_VELOCITYARRAY_H
