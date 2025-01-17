// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from turtlesim_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtlesim_msgs/msg/detail/pose__struct.h"
#include "turtlesim_msgs/msg/detail/pose__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtlesim_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Pose_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Pose_type_support_ids_t;

static const _Pose_type_support_ids_t _Pose_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Pose_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Pose_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Pose_type_support_symbol_names_t _Pose_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim_msgs, msg, Pose)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_msgs, msg, Pose)),
  }
};

typedef struct _Pose_type_support_data_t
{
  void * data[2];
} _Pose_type_support_data_t;

static _Pose_type_support_data_t _Pose_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Pose_message_typesupport_map = {
  2,
  "turtlesim_msgs",
  &_Pose_message_typesupport_ids.typesupport_identifier[0],
  &_Pose_message_typesupport_symbol_names.symbol_name[0],
  &_Pose_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Pose_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Pose_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace turtlesim_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, turtlesim_msgs, msg, Pose)() {
  return &::turtlesim_msgs::msg::rosidl_typesupport_c::Pose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
