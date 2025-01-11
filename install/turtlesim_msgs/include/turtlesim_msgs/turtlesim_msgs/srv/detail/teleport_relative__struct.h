// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_msgs:srv/TeleportRelative.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_MSGS__SRV__DETAIL__TELEPORT_RELATIVE__STRUCT_H_
#define TURTLESIM_MSGS__SRV__DETAIL__TELEPORT_RELATIVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TeleportRelative in the package turtlesim_msgs.
typedef struct turtlesim_msgs__srv__TeleportRelative_Request
{
  float linear;
  float angular;
} turtlesim_msgs__srv__TeleportRelative_Request;

// Struct for a sequence of turtlesim_msgs__srv__TeleportRelative_Request.
typedef struct turtlesim_msgs__srv__TeleportRelative_Request__Sequence
{
  turtlesim_msgs__srv__TeleportRelative_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_msgs__srv__TeleportRelative_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/TeleportRelative in the package turtlesim_msgs.
typedef struct turtlesim_msgs__srv__TeleportRelative_Response
{
  uint8_t structure_needs_at_least_one_member;
} turtlesim_msgs__srv__TeleportRelative_Response;

// Struct for a sequence of turtlesim_msgs__srv__TeleportRelative_Response.
typedef struct turtlesim_msgs__srv__TeleportRelative_Response__Sequence
{
  turtlesim_msgs__srv__TeleportRelative_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_msgs__srv__TeleportRelative_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_MSGS__SRV__DETAIL__TELEPORT_RELATIVE__STRUCT_H_
