// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_msgs:srv/TeleportAbsolute.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_MSGS__SRV__DETAIL__TELEPORT_ABSOLUTE__BUILDER_HPP_
#define TURTLESIM_MSGS__SRV__DETAIL__TELEPORT_ABSOLUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_msgs/srv/detail/teleport_absolute__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_msgs
{

namespace srv
{

namespace builder
{

class Init_TeleportAbsolute_Request_theta
{
public:
  explicit Init_TeleportAbsolute_Request_theta(::turtlesim_msgs::srv::TeleportAbsolute_Request & msg)
  : msg_(msg)
  {}
  ::turtlesim_msgs::srv::TeleportAbsolute_Request theta(::turtlesim_msgs::srv::TeleportAbsolute_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_msgs::srv::TeleportAbsolute_Request msg_;
};

class Init_TeleportAbsolute_Request_y
{
public:
  explicit Init_TeleportAbsolute_Request_y(::turtlesim_msgs::srv::TeleportAbsolute_Request & msg)
  : msg_(msg)
  {}
  Init_TeleportAbsolute_Request_theta y(::turtlesim_msgs::srv::TeleportAbsolute_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TeleportAbsolute_Request_theta(msg_);
  }

private:
  ::turtlesim_msgs::srv::TeleportAbsolute_Request msg_;
};

class Init_TeleportAbsolute_Request_x
{
public:
  Init_TeleportAbsolute_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeleportAbsolute_Request_y x(::turtlesim_msgs::srv::TeleportAbsolute_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TeleportAbsolute_Request_y(msg_);
  }

private:
  ::turtlesim_msgs::srv::TeleportAbsolute_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_msgs::srv::TeleportAbsolute_Request>()
{
  return turtlesim_msgs::srv::builder::Init_TeleportAbsolute_Request_x();
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
auto build<::turtlesim_msgs::srv::TeleportAbsolute_Response>()
{
  return ::turtlesim_msgs::srv::TeleportAbsolute_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtlesim_msgs

#endif  // TURTLESIM_MSGS__SRV__DETAIL__TELEPORT_ABSOLUTE__BUILDER_HPP_
