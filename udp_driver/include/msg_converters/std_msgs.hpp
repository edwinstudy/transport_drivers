// Copyright 2021 LeoDrive.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Developed by LeoDrive, 2021

#ifndef MSG_CONVERTERS__STD_MSGS_HPP_
#define MSG_CONVERTERS__STD_MSGS_HPP_

/*
 * std_msgs::msg::Int variant
 */
#include <std_msgs/msg/int8.hpp>
#include <std_msgs/msg/int16.hpp>
#include <std_msgs/msg/int32.hpp>
#include <std_msgs/msg/int64.hpp>

/*
 * std_msgs::msg::UInt variant
 */
#include <std_msgs/msg/u_int8.hpp>
#include <std_msgs/msg/u_int16.hpp>
#include <std_msgs/msg/u_int32.hpp>
#include <std_msgs/msg/u_int64.hpp>

/*
 * std_msgs::msg::Float variant
 */
#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/float64.hpp>

#include "common.hpp"

namespace drivers
{
namespace utils
{

/*
 * ROS2 Message to Raw Buffer Converters
 * std_msgs::msg::Int variant
 */
void convertFromRos2Message(const std_msgs::msg::Int8::SharedPtr & in, MutSocketBuffer & out);
void convertFromRos2Message(const std_msgs::msg::Int16::SharedPtr & in, MutSocketBuffer & out);
void convertFromRos2Message(const std_msgs::msg::Int32::SharedPtr & in, MutSocketBuffer & out);
void convertFromRos2Message(const std_msgs::msg::Int64::SharedPtr & in, MutSocketBuffer & out);

/*
 * Raw Buffer to ROS2 Message Converters
 * std_msgs::msg::Int variant
 */
void convertToRos2Message(const MutSocketBuffer & in, std_msgs::msg::Int8 & out);
void convertToRos2Message(const MutSocketBuffer & in, std_msgs::msg::Int16 & out);
void convertToRos2Message(const MutSocketBuffer & in, std_msgs::msg::Int32 & out);
void convertToRos2Message(const MutSocketBuffer & in, std_msgs::msg::Int64 & out);

/*
 * ROS2 Message to Raw Buffer Converters
 * std_msgs::msg::UInt variant
 */
void convertFromRos2Message(const std_msgs::msg::UInt8::SharedPtr & in, MutSocketBuffer & out);
void convertFromRos2Message(const std_msgs::msg::UInt16::SharedPtr & in, MutSocketBuffer & out);
void convertFromRos2Message(const std_msgs::msg::UInt32::SharedPtr & in, MutSocketBuffer & out);
void convertFromRos2Message(const std_msgs::msg::UInt64::SharedPtr & in, MutSocketBuffer & out);

/*
 * Raw Buffer to ROS2 Message Converters
 * std_msgs::msg::UInt variant
 */
void convertToRos2Message(const MutSocketBuffer & in, std_msgs::msg::UInt8 & out);
void convertToRos2Message(const MutSocketBuffer & in, std_msgs::msg::UInt16 & out);
void convertToRos2Message(const MutSocketBuffer & in, std_msgs::msg::UInt32 & out);
void convertToRos2Message(const MutSocketBuffer & in, std_msgs::msg::UInt64 & out);

/*
 * ROS2 Message to Raw Buffer Converters
 * std_msgs::msg::Float variant
 */
void convertFromRos2Message(const std_msgs::msg::Float32::SharedPtr & in, MutSocketBuffer & out);
void convertFromRos2Message(const std_msgs::msg::Float64::SharedPtr & in, MutSocketBuffer & out);

/*
 * Raw Buffer to ROS2 Message Converters
 * std_msgs::msg::Float variant
 */
void convertToRos2Message(const MutSocketBuffer & in, std_msgs::msg::Float32 & out);
void convertToRos2Message(const MutSocketBuffer & in, std_msgs::msg::Float64 & out);

}  // namespace utils
}  // namespace drivers

#endif  // MSG_CONVERTERS__STD_MSGS_HPP_
