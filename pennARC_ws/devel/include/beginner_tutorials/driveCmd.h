/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/dhruva/Documents/mlab/autonomous-racing/pennARC_ws/src/beginner_tutorials/msg/driveCmd.msg
 *
 */


#ifndef BEGINNER_TUTORIALS_MESSAGE_DRIVECMD_H
#define BEGINNER_TUTORIALS_MESSAGE_DRIVECMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace beginner_tutorials
{
template <class ContainerAllocator>
struct driveCmd_
{
  typedef driveCmd_<ContainerAllocator> Type;

  driveCmd_()
    : steering(0.0)
    , throttle(0.0)  {
    }
  driveCmd_(const ContainerAllocator& _alloc)
    : steering(0.0)
    , throttle(0.0)  {
    }



   typedef float _steering_type;
  _steering_type steering;

   typedef float _throttle_type;
  _throttle_type throttle;




  typedef boost::shared_ptr< ::beginner_tutorials::driveCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::driveCmd_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct driveCmd_

typedef ::beginner_tutorials::driveCmd_<std::allocator<void> > driveCmd;

typedef boost::shared_ptr< ::beginner_tutorials::driveCmd > driveCmdPtr;
typedef boost::shared_ptr< ::beginner_tutorials::driveCmd const> driveCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::driveCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::driveCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'beginner_tutorials': ['/home/dhruva/Documents/mlab/autonomous-racing/pennARC_ws/src/beginner_tutorials/msg', '/home/dhruva/Documents/mlab/autonomous-racing/pennARC_ws/src/beginner_tutorials/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'custom_messages': ['/home/dhruva/Documents/mlab/autonomous-racing/pennARC_ws/src/custom_messages/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::driveCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::driveCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::driveCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::driveCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::driveCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::driveCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::driveCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "07077f1ca3b57b112f69aabcdabf600e";
  }

  static const char* value(const ::beginner_tutorials::driveCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x07077f1ca3b57b11ULL;
  static const uint64_t static_value2 = 0x2f69aabcdabf600eULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::driveCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/driveCmd";
  }

  static const char* value(const ::beginner_tutorials::driveCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::driveCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 steering\n\
float32 throttle\n\
";
  }

  static const char* value(const ::beginner_tutorials::driveCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::driveCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.steering);
      stream.next(m.throttle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct driveCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::driveCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::driveCmd_<ContainerAllocator>& v)
  {
    s << indent << "steering: ";
    Printer<float>::stream(s, indent + "  ", v.steering);
    s << indent << "throttle: ";
    Printer<float>::stream(s, indent + "  ", v.throttle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_DRIVECMD_H
