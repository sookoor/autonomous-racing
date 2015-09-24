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
 * Auto-generated by gensrv_cpp from file /home/dhruva/Documents/mlab/autonomous-racing/pennARC_ws/src/camera1394/srv/SetCameraRegisters.srv
 *
 */


#ifndef CAMERA1394_MESSAGE_SETCAMERAREGISTERS_H
#define CAMERA1394_MESSAGE_SETCAMERAREGISTERS_H

#include <ros/service_traits.h>


#include <camera1394/SetCameraRegistersRequest.h>
#include <camera1394/SetCameraRegistersResponse.h>


namespace camera1394
{

struct SetCameraRegisters
{

typedef SetCameraRegistersRequest Request;
typedef SetCameraRegistersResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetCameraRegisters
} // namespace camera1394


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::camera1394::SetCameraRegisters > {
  static const char* value()
  {
    return "703211788a5d6f08f820dfb1792ab51c";
  }

  static const char* value(const ::camera1394::SetCameraRegisters&) { return value(); }
};

template<>
struct DataType< ::camera1394::SetCameraRegisters > {
  static const char* value()
  {
    return "camera1394/SetCameraRegisters";
  }

  static const char* value(const ::camera1394::SetCameraRegisters&) { return value(); }
};


// service_traits::MD5Sum< ::camera1394::SetCameraRegistersRequest> should match 
// service_traits::MD5Sum< ::camera1394::SetCameraRegisters > 
template<>
struct MD5Sum< ::camera1394::SetCameraRegistersRequest>
{
  static const char* value()
  {
    return MD5Sum< ::camera1394::SetCameraRegisters >::value();
  }
  static const char* value(const ::camera1394::SetCameraRegistersRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::camera1394::SetCameraRegistersRequest> should match 
// service_traits::DataType< ::camera1394::SetCameraRegisters > 
template<>
struct DataType< ::camera1394::SetCameraRegistersRequest>
{
  static const char* value()
  {
    return DataType< ::camera1394::SetCameraRegisters >::value();
  }
  static const char* value(const ::camera1394::SetCameraRegistersRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::camera1394::SetCameraRegistersResponse> should match 
// service_traits::MD5Sum< ::camera1394::SetCameraRegisters > 
template<>
struct MD5Sum< ::camera1394::SetCameraRegistersResponse>
{
  static const char* value()
  {
    return MD5Sum< ::camera1394::SetCameraRegisters >::value();
  }
  static const char* value(const ::camera1394::SetCameraRegistersResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::camera1394::SetCameraRegistersResponse> should match 
// service_traits::DataType< ::camera1394::SetCameraRegisters > 
template<>
struct DataType< ::camera1394::SetCameraRegistersResponse>
{
  static const char* value()
  {
    return DataType< ::camera1394::SetCameraRegisters >::value();
  }
  static const char* value(const ::camera1394::SetCameraRegistersResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CAMERA1394_MESSAGE_SETCAMERAREGISTERS_H