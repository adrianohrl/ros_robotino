/* Auto-generated by genmsg_cpp for file /home/robotino/fuerte_workspace/sandbox/robotino/robotino_refbox/msg/Order_Info.msg */
#ifndef ROBOTINO_REFBOX_MESSAGE_ORDER_INFO_H
#define ROBOTINO_REFBOX_MESSAGE_ORDER_INFO_H
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
struct Order_Info_ {
  typedef Order_Info_<ContainerAllocator> Type;

  Order_Info_()
  : peca()
  , minI()
  , secI()
  , minF()
  , secF()
  {
    peca.assign(0);
    minI.assign(0);
    secI.assign(0);
    minF.assign(0);
    secF.assign(0);
  }

  Order_Info_(const ContainerAllocator& _alloc)
  : peca()
  , minI()
  , secI()
  , minF()
  , secF()
  {
    peca.assign(0);
    minI.assign(0);
    secI.assign(0);
    minF.assign(0);
    secF.assign(0);
  }

  typedef boost::array<int32_t, 5>  _peca_type;
  boost::array<int32_t, 5>  peca;

  typedef boost::array<int64_t, 5>  _minI_type;
  boost::array<int64_t, 5>  minI;

  typedef boost::array<int64_t, 5>  _secI_type;
  boost::array<int64_t, 5>  secI;

  typedef boost::array<int64_t, 5>  _minF_type;
  boost::array<int64_t, 5>  minF;

  typedef boost::array<int64_t, 5>  _secF_type;
  boost::array<int64_t, 5>  secF;


  typedef boost::shared_ptr< ::robotino_refbox::Order_Info_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_refbox::Order_Info_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Order_Info
typedef  ::robotino_refbox::Order_Info_<std::allocator<void> > Order_Info;

typedef boost::shared_ptr< ::robotino_refbox::Order_Info> Order_InfoPtr;
typedef boost::shared_ptr< ::robotino_refbox::Order_Info const> Order_InfoConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::robotino_refbox::Order_Info_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::robotino_refbox::Order_Info_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace robotino_refbox

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::robotino_refbox::Order_Info_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::robotino_refbox::Order_Info_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::robotino_refbox::Order_Info_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ab16e001315a0706ff1b6bbcef9832bf";
  }

  static const char* value(const  ::robotino_refbox::Order_Info_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xab16e001315a0706ULL;
  static const uint64_t static_value2 = 0xff1b6bbcef9832bfULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_refbox::Order_Info_<ContainerAllocator> > {
  static const char* value() 
  {
    return "robotino_refbox/Order_Info";
  }

  static const char* value(const  ::robotino_refbox::Order_Info_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::robotino_refbox::Order_Info_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32[5] peca\n\
int64[5] minI\n\
int64[5] secI\n\
int64[5] minF\n\
int64[5] secF\n\
\n\
";
  }

  static const char* value(const  ::robotino_refbox::Order_Info_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::robotino_refbox::Order_Info_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::robotino_refbox::Order_Info_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.peca);
    stream.next(m.minI);
    stream.next(m.secI);
    stream.next(m.minF);
    stream.next(m.secF);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Order_Info_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_refbox::Order_Info_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::robotino_refbox::Order_Info_<ContainerAllocator> & v) 
  {
    s << indent << "peca[]" << std::endl;
    for (size_t i = 0; i < v.peca.size(); ++i)
    {
      s << indent << "  peca[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.peca[i]);
    }
    s << indent << "minI[]" << std::endl;
    for (size_t i = 0; i < v.minI.size(); ++i)
    {
      s << indent << "  minI[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.minI[i]);
    }
    s << indent << "secI[]" << std::endl;
    for (size_t i = 0; i < v.secI.size(); ++i)
    {
      s << indent << "  secI[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.secI[i]);
    }
    s << indent << "minF[]" << std::endl;
    for (size_t i = 0; i < v.minF.size(); ++i)
    {
      s << indent << "  minF[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.minF[i]);
    }
    s << indent << "secF[]" << std::endl;
    for (size_t i = 0; i < v.secF.size(); ++i)
    {
      s << indent << "  secF[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.secF[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_REFBOX_MESSAGE_ORDER_INFO_H

