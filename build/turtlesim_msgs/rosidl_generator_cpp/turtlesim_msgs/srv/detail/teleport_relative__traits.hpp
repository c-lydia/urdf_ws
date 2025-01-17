// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_msgs:srv/TeleportRelative.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_MSGS__SRV__DETAIL__TELEPORT_RELATIVE__TRAITS_HPP_
#define TURTLESIM_MSGS__SRV__DETAIL__TELEPORT_RELATIVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_msgs/srv/detail/teleport_relative__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TeleportRelative_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear
  {
    out << "linear: ";
    rosidl_generator_traits::value_to_yaml(msg.linear, out);
    out << ", ";
  }

  // member: angular
  {
    out << "angular: ";
    rosidl_generator_traits::value_to_yaml(msg.angular, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TeleportRelative_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear: ";
    rosidl_generator_traits::value_to_yaml(msg.linear, out);
    out << "\n";
  }

  // member: angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular: ";
    rosidl_generator_traits::value_to_yaml(msg.angular, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TeleportRelative_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlesim_msgs

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_msgs::srv::TeleportRelative_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_msgs::srv::TeleportRelative_Request & msg)
{
  return turtlesim_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_msgs::srv::TeleportRelative_Request>()
{
  return "turtlesim_msgs::srv::TeleportRelative_Request";
}

template<>
inline const char * name<turtlesim_msgs::srv::TeleportRelative_Request>()
{
  return "turtlesim_msgs/srv/TeleportRelative_Request";
}

template<>
struct has_fixed_size<turtlesim_msgs::srv::TeleportRelative_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_msgs::srv::TeleportRelative_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_msgs::srv::TeleportRelative_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtlesim_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TeleportRelative_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TeleportRelative_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TeleportRelative_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlesim_msgs

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_msgs::srv::TeleportRelative_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_msgs::srv::TeleportRelative_Response & msg)
{
  return turtlesim_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_msgs::srv::TeleportRelative_Response>()
{
  return "turtlesim_msgs::srv::TeleportRelative_Response";
}

template<>
inline const char * name<turtlesim_msgs::srv::TeleportRelative_Response>()
{
  return "turtlesim_msgs/srv/TeleportRelative_Response";
}

template<>
struct has_fixed_size<turtlesim_msgs::srv::TeleportRelative_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_msgs::srv::TeleportRelative_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_msgs::srv::TeleportRelative_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_msgs::srv::TeleportRelative>()
{
  return "turtlesim_msgs::srv::TeleportRelative";
}

template<>
inline const char * name<turtlesim_msgs::srv::TeleportRelative>()
{
  return "turtlesim_msgs/srv/TeleportRelative";
}

template<>
struct has_fixed_size<turtlesim_msgs::srv::TeleportRelative>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim_msgs::srv::TeleportRelative_Request>::value &&
    has_fixed_size<turtlesim_msgs::srv::TeleportRelative_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim_msgs::srv::TeleportRelative>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim_msgs::srv::TeleportRelative_Request>::value &&
    has_bounded_size<turtlesim_msgs::srv::TeleportRelative_Response>::value
  >
{
};

template<>
struct is_service<turtlesim_msgs::srv::TeleportRelative>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim_msgs::srv::TeleportRelative_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim_msgs::srv::TeleportRelative_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_MSGS__SRV__DETAIL__TELEPORT_RELATIVE__TRAITS_HPP_
