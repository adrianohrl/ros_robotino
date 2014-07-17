/* Auto-generated by genmsg_cpp for file /home/viki/ros_workspace/robotino-ros-pkg/robotino/robotino_vision/msg/LampPostState.msg */
#ifndef ROBOTINO_VISION_MESSAGE_LAMPPOSTSTATE_H
#define ROBOTINO_VISION_MESSAGE_LAMPPOSTSTATE_H
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

#include "robotino_vision/LampState.h"

namespace robotino_vision
{
template <class ContainerAllocator>
struct LampPostState_ {
  typedef LampPostState_<ContainerAllocator> Type;

  LampPostState_()
  : lamps()
  , at()
  {
  }

  LampPostState_(const ContainerAllocator& _alloc)
  : lamps()
  , at()
  {
    lamps.assign( ::robotino_vision::LampState_<ContainerAllocator> (_alloc));
  }

  typedef boost::array< ::robotino_vision::LampState_<ContainerAllocator> , 3>  _lamps_type;
  boost::array< ::robotino_vision::LampState_<ContainerAllocator> , 3>  lamps;

  typedef ros::Time _at_type;
  ros::Time at;


  typedef boost::shared_ptr< ::robotino_vision::LampPostState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_vision::LampPostState_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LampPostState
typedef  ::robotino_vision::LampPostState_<std::allocator<void> > LampPostState;

typedef boost::shared_ptr< ::robotino_vision::LampPostState> LampPostStatePtr;
typedef boost::shared_ptr< ::robotino_vision::LampPostState const> LampPostStateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::robotino_vision::LampPostState_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::robotino_vision::LampPostState_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace robotino_vision

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robotino_vision::LampPostState_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robotino_vision::LampPostState_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robotino_vision::LampPostState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2f189c67d3ae6b969ff078f328060705";
  }

  static const char* value(const  ::robotino_vision::LampPostState_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2f189c67d3ae6b96ULL;
  static const uint64_t static_value2 = 0x9ff078f328060705ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_vision::LampPostState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_vision/LampPostState";
  }

  static const char* value(const  ::robotino_vision::LampPostState_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robotino_vision::LampPostState_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_vision/LampState[3] lamps		# A fixed-length vector of lamps\n\
time at					# Time at which this had been stimated\n\
\n\
================================================================================\n\
MSG: robotino_vision/LampState\n\
string color		# lamp color\n\
bool isLighting		# true if this lamp is lighting and false if this lamp is not.\n\
time at			# Time at which this had been stimated\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::robotino_vision::LampPostState_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robotino_vision::LampPostState_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.lamps);
    stream.next(m.at);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LampPostState_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_vision::LampPostState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::robotino_vision::LampPostState_<ContainerAllocator> & v) 
  {
    s << indent << "lamps[]" << std::endl;
    for (size_t i = 0; i < v.lamps.size(); ++i)
    {
      s << indent << "  lamps[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::robotino_vision::LampState_<ContainerAllocator> >::stream(s, indent + "    ", v.lamps[i]);
    }
    s << indent << "at: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.at);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_VISION_MESSAGE_LAMPPOSTSTATE_H

