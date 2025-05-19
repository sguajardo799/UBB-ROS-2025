// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from lab2_1_intefaces_custom:srv/AddFourInts.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "lab2_1_intefaces_custom/srv/detail/add_four_ints__functions.h"
#include "lab2_1_intefaces_custom/srv/detail/add_four_ints__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace lab2_1_intefaces_custom
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddFourInts_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddFourInts_Request_type_support_ids_t;

static const _AddFourInts_Request_type_support_ids_t _AddFourInts_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AddFourInts_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddFourInts_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddFourInts_Request_type_support_symbol_names_t _AddFourInts_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lab2_1_intefaces_custom, srv, AddFourInts_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lab2_1_intefaces_custom, srv, AddFourInts_Request)),
  }
};

typedef struct _AddFourInts_Request_type_support_data_t
{
  void * data[2];
} _AddFourInts_Request_type_support_data_t;

static _AddFourInts_Request_type_support_data_t _AddFourInts_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddFourInts_Request_message_typesupport_map = {
  2,
  "lab2_1_intefaces_custom",
  &_AddFourInts_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AddFourInts_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AddFourInts_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddFourInts_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddFourInts_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &lab2_1_intefaces_custom__srv__AddFourInts_Request__get_type_hash,
  &lab2_1_intefaces_custom__srv__AddFourInts_Request__get_type_description,
  &lab2_1_intefaces_custom__srv__AddFourInts_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace lab2_1_intefaces_custom

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lab2_1_intefaces_custom::srv::AddFourInts_Request>()
{
  return &::lab2_1_intefaces_custom::srv::rosidl_typesupport_cpp::AddFourInts_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, lab2_1_intefaces_custom, srv, AddFourInts_Request)() {
  return get_message_type_support_handle<lab2_1_intefaces_custom::srv::AddFourInts_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lab2_1_intefaces_custom/srv/detail/add_four_ints__functions.h"
// already included above
// #include "lab2_1_intefaces_custom/srv/detail/add_four_ints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lab2_1_intefaces_custom
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddFourInts_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddFourInts_Response_type_support_ids_t;

static const _AddFourInts_Response_type_support_ids_t _AddFourInts_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AddFourInts_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddFourInts_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddFourInts_Response_type_support_symbol_names_t _AddFourInts_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lab2_1_intefaces_custom, srv, AddFourInts_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lab2_1_intefaces_custom, srv, AddFourInts_Response)),
  }
};

typedef struct _AddFourInts_Response_type_support_data_t
{
  void * data[2];
} _AddFourInts_Response_type_support_data_t;

static _AddFourInts_Response_type_support_data_t _AddFourInts_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddFourInts_Response_message_typesupport_map = {
  2,
  "lab2_1_intefaces_custom",
  &_AddFourInts_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AddFourInts_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AddFourInts_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddFourInts_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddFourInts_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &lab2_1_intefaces_custom__srv__AddFourInts_Response__get_type_hash,
  &lab2_1_intefaces_custom__srv__AddFourInts_Response__get_type_description,
  &lab2_1_intefaces_custom__srv__AddFourInts_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace lab2_1_intefaces_custom

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lab2_1_intefaces_custom::srv::AddFourInts_Response>()
{
  return &::lab2_1_intefaces_custom::srv::rosidl_typesupport_cpp::AddFourInts_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, lab2_1_intefaces_custom, srv, AddFourInts_Response)() {
  return get_message_type_support_handle<lab2_1_intefaces_custom::srv::AddFourInts_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "lab2_1_intefaces_custom/srv/detail/add_four_ints__functions.h"
// already included above
// #include "lab2_1_intefaces_custom/srv/detail/add_four_ints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lab2_1_intefaces_custom
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddFourInts_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddFourInts_Event_type_support_ids_t;

static const _AddFourInts_Event_type_support_ids_t _AddFourInts_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AddFourInts_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddFourInts_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddFourInts_Event_type_support_symbol_names_t _AddFourInts_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lab2_1_intefaces_custom, srv, AddFourInts_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lab2_1_intefaces_custom, srv, AddFourInts_Event)),
  }
};

typedef struct _AddFourInts_Event_type_support_data_t
{
  void * data[2];
} _AddFourInts_Event_type_support_data_t;

static _AddFourInts_Event_type_support_data_t _AddFourInts_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddFourInts_Event_message_typesupport_map = {
  2,
  "lab2_1_intefaces_custom",
  &_AddFourInts_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AddFourInts_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AddFourInts_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddFourInts_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddFourInts_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &lab2_1_intefaces_custom__srv__AddFourInts_Event__get_type_hash,
  &lab2_1_intefaces_custom__srv__AddFourInts_Event__get_type_description,
  &lab2_1_intefaces_custom__srv__AddFourInts_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace lab2_1_intefaces_custom

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lab2_1_intefaces_custom::srv::AddFourInts_Event>()
{
  return &::lab2_1_intefaces_custom::srv::rosidl_typesupport_cpp::AddFourInts_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, lab2_1_intefaces_custom, srv, AddFourInts_Event)() {
  return get_message_type_support_handle<lab2_1_intefaces_custom::srv::AddFourInts_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "lab2_1_intefaces_custom/srv/detail/add_four_ints__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace lab2_1_intefaces_custom
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _AddFourInts_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddFourInts_type_support_ids_t;

static const _AddFourInts_type_support_ids_t _AddFourInts_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _AddFourInts_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddFourInts_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddFourInts_type_support_symbol_names_t _AddFourInts_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, lab2_1_intefaces_custom, srv, AddFourInts)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lab2_1_intefaces_custom, srv, AddFourInts)),
  }
};

typedef struct _AddFourInts_type_support_data_t
{
  void * data[2];
} _AddFourInts_type_support_data_t;

static _AddFourInts_type_support_data_t _AddFourInts_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddFourInts_service_typesupport_map = {
  2,
  "lab2_1_intefaces_custom",
  &_AddFourInts_service_typesupport_ids.typesupport_identifier[0],
  &_AddFourInts_service_typesupport_symbol_names.symbol_name[0],
  &_AddFourInts_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AddFourInts_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddFourInts_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<lab2_1_intefaces_custom::srv::AddFourInts_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<lab2_1_intefaces_custom::srv::AddFourInts_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<lab2_1_intefaces_custom::srv::AddFourInts_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<lab2_1_intefaces_custom::srv::AddFourInts>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<lab2_1_intefaces_custom::srv::AddFourInts>,
  &lab2_1_intefaces_custom__srv__AddFourInts__get_type_hash,
  &lab2_1_intefaces_custom__srv__AddFourInts__get_type_description,
  &lab2_1_intefaces_custom__srv__AddFourInts__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace lab2_1_intefaces_custom

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<lab2_1_intefaces_custom::srv::AddFourInts>()
{
  return &::lab2_1_intefaces_custom::srv::rosidl_typesupport_cpp::AddFourInts_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, lab2_1_intefaces_custom, srv, AddFourInts)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<lab2_1_intefaces_custom::srv::AddFourInts>();
}

#ifdef __cplusplus
}
#endif
