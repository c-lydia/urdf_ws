// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_msgs:msg/Color.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_MSGS__MSG__DETAIL__COLOR__TRAITS_HPP_
#define TURTLESIM_MSGS__MSG__DETAIL__COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_msgs/msg/detail/color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Color & msg,
  std::ostream & out)
{
  out << "{";
  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: g
  {
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Color & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Color & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace turtlesim_msgs

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_msgs::msg::Color & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_msgs::msg::Color & msg)
{
  return turtlesim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_msgs::msg::Color>()
{
  return "turtlesim_msgs::msg::Color";
}

template<>
inline const char * name<turtlesim_msgs::msg::Color>()
{
  return "turtlesim_msgs/msg/Color";
}

template<>
struct has_fixed_size<turtlesim_msgs::msg::Color>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_msgs::msg::Color>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_msgs::msg::Color>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_MSGS__MSG__DETAIL__COLOR__TRAITS_HPP_
