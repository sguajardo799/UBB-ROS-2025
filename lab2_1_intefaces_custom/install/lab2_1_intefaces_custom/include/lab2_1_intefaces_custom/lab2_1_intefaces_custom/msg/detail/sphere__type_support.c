// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lab2_1_intefaces_custom:msg/Sphere.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lab2_1_intefaces_custom/msg/detail/sphere__rosidl_typesupport_introspection_c.h"
#include "lab2_1_intefaces_custom/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lab2_1_intefaces_custom/msg/detail/sphere__functions.h"
#include "lab2_1_intefaces_custom/msg/detail/sphere__struct.h"


// Include directives for member types
// Member `center`
#include "geometry_msgs/msg/point.h"
// Member `center`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lab2_1_intefaces_custom__msg__Sphere__init(message_memory);
}

void lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_fini_function(void * message_memory)
{
  lab2_1_intefaces_custom__msg__Sphere__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_member_array[2] = {
  {
    "center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lab2_1_intefaces_custom__msg__Sphere, center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lab2_1_intefaces_custom__msg__Sphere, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_members = {
  "lab2_1_intefaces_custom__msg",  // message namespace
  "Sphere",  // message name
  2,  // number of fields
  sizeof(lab2_1_intefaces_custom__msg__Sphere),
  false,  // has_any_key_member_
  lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_member_array,  // message members
  lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_init_function,  // function to initialize message memory (memory has to be allocated)
  lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_type_support_handle = {
  0,
  &lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_members,
  get_message_typesupport_handle_function,
  &lab2_1_intefaces_custom__msg__Sphere__get_type_hash,
  &lab2_1_intefaces_custom__msg__Sphere__get_type_description,
  &lab2_1_intefaces_custom__msg__Sphere__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lab2_1_intefaces_custom
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lab2_1_intefaces_custom, msg, Sphere)() {
  lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_type_support_handle.typesupport_identifier) {
    lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lab2_1_intefaces_custom__msg__Sphere__rosidl_typesupport_introspection_c__Sphere_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
