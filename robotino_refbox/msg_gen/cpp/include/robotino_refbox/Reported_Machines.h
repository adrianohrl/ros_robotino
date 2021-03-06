/* Auto-generated by genmsg_cpp for file /home/robotino/fuerte_workspace/sandbox/robotino/robotino_refbox/msg/Reported_Machines.msg */
#ifndef ROBOTINO_REFBOX_MESSAGE_REPORTED_MACHINES_H
#define ROBOTINO_REFBOX_MESSAGE_REPORTED_MACHINES_H
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


namespace robotino_refbox
{
template <class ContainerAllocator>
struct Reported_Machines_ {
  typedef Reported_Machines_<ContainerAllocator> Type;

  Reported_Machines_()
  : machines()
  {
  }

  Reported_Machines_(const ContainerAllocator& _alloc)
  : machines()
  {
    machines.assign(std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > (_alloc));
  }

  typedef boost::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , 12>  _machines_type;
  boost::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , 12>  machines;


  typedef boost::shared_ptr< ::robotino_refbox::Reported_Machines_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_refbox::Reported_Machines_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Reported_Machines
typedef  ::robotino_refbox::Reported_Machines_<std::allocator<void> > Reported_Machines;

typedef boost::shared_ptr< ::robotino_refbox::Reported_Machines> Reported_MachinesPtr;
typedef boost::shared_ptr< ::robotino_refbox::Reported_Machines const> Reported_MachinesConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::robotino_refbox::Reported_Machines_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::robotino_refbox::Reported_Machines_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace robotino_refbox

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robotino_refbox::Reported_Machines_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robotino_refbox::Reported_Machines_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robotino_refbox::Reported_Machines_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a2e53b92a4c5a291a2239aa1d29e284d";
  }

  static const char* value(const  ::robotino_refbox::Reported_Machines_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa2e53b92a4c5a291ULL;
  static const uint64_t static_value2 = 0xa2239aa1d29e284dULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_refbox::Reported_Machines_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_refbox/Reported_Machines";
  }

  static const char* value(const  ::robotino_refbox::Reported_Machines_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robotino_refbox::Reported_Machines_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string[12] machines\n\
\n\
";
  }

  static const char* value(const  ::robotino_refbox::Reported_Machines_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robotino_refbox::Reported_Machines_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.machines);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Reported_Machines_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_refbox::Reported_Machines_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::robotino_refbox::Reported_Machines_<ContainerAllocator> & v) 
  {
    s << indent << "machines[]" << std::endl;
    for (size_t i = 0; i < v.machines.size(); ++i)
    {
      s << indent << "  machines[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.machines[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_REFBOX_MESSAGE_REPORTED_MACHINES_H

