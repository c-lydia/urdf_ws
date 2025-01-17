// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_msgs:srv/TeleportRelative.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_MSGS__SRV__DETAIL__TELEPORT_RELATIVE__BUILDER_HPP_
#define TURTLESIM_MSGS__SRV__DETAIL__TELEPORT_RELATIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_msgs/srv/detail/teleport_relative__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_msgs
{

namespace srv
{

namespace builder
{

class Init_TeleportRelative_Request_angular
{
public:
  explicit Init_TeleportRelative_Request_angular(::turtlesim_msgs::srv::TeleportRelative_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim_msgs::srv::TeleportRelative_Request angular(::turtlesim_msgs::srv::TeleportRelative_Request::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_msgs::srv::TeleportRelative_Request msg_;
};

class Init_TeleportRelative_Request_linear
{
public:
  Init_TeleportRelative_Request_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleportRelative_Request_angular linear(::turtlesim_msgs::srv::TeleportRelative_Request::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_TeleportRelative_Request_angular(msg_);
  }

private:
  ::turtlesim_msgs::srv::TeleportRelative_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_msgs::srv::TeleportRelative_Request>()
{
  return turtlesim_msgs::srv::builder::Init_TeleportRelative_Request_linear();
}

}  // namespace turtlesim_msgs


namespace turtlesim_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_msgs::srv::TeleportRelative_Response>()
{
  return ::turtlesim_msgs::srv::TeleportRelative_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtlesim_msgs

#endif  // TURTLESIM_MSGS__SRV__DETAIL__TELEPORT_RELATIVE__BUILDER_HPP_
