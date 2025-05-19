// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from lab2_1_intefaces_custom:srv/AddFourInts.idl
// generated code does not contain a copyright notice

#include "lab2_1_intefaces_custom/srv/detail/add_four_ints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_lab2_1_intefaces_custom
const rosidl_type_hash_t *
lab2_1_intefaces_custom__srv__AddFourInts__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0x11, 0x5a, 0x3c, 0xa0, 0xe9, 0x99, 0x71,
      0x2c, 0x7f, 0xd8, 0x23, 0x38, 0xca, 0x86, 0x8c,
      0x3f, 0x2e, 0xb2, 0x64, 0x14, 0x6a, 0xb7, 0x38,
      0x35, 0xb5, 0x1c, 0x0c, 0xfb, 0x6a, 0xfc, 0x13,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_lab2_1_intefaces_custom
const rosidl_type_hash_t *
lab2_1_intefaces_custom__srv__AddFourInts_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x86, 0xf3, 0xdd, 0xb9, 0x52, 0x12, 0xc2, 0xdb,
      0x9a, 0x30, 0xfe, 0xd8, 0x67, 0x3a, 0xea, 0xaf,
      0x89, 0x6e, 0x31, 0x6f, 0x4e, 0xd1, 0xb7, 0x0d,
      0x80, 0x51, 0x65, 0x42, 0x77, 0x7b, 0x06, 0xec,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_lab2_1_intefaces_custom
const rosidl_type_hash_t *
lab2_1_intefaces_custom__srv__AddFourInts_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd8, 0x87, 0x5b, 0xc4, 0x4f, 0xdd, 0xf4, 0x1d,
      0x5b, 0x4e, 0x73, 0x5c, 0xe6, 0x68, 0x78, 0x6a,
      0x9d, 0x9f, 0xb5, 0x06, 0xed, 0xca, 0x78, 0xd4,
      0x25, 0xe5, 0x6f, 0xfb, 0xf7, 0x01, 0x1a, 0x43,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_lab2_1_intefaces_custom
const rosidl_type_hash_t *
lab2_1_intefaces_custom__srv__AddFourInts_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x34, 0x42, 0x30, 0xf9, 0xbe, 0x4d, 0x1e, 0x89,
      0x79, 0x14, 0xc4, 0x90, 0x02, 0x31, 0xaa, 0x49,
      0xde, 0x9c, 0x78, 0x66, 0xe7, 0xbd, 0xc7, 0x53,
      0x32, 0x97, 0xf8, 0xcd, 0xd7, 0x12, 0xc4, 0xeb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char lab2_1_intefaces_custom__srv__AddFourInts__TYPE_NAME[] = "lab2_1_intefaces_custom/srv/AddFourInts";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char lab2_1_intefaces_custom__srv__AddFourInts_Event__TYPE_NAME[] = "lab2_1_intefaces_custom/srv/AddFourInts_Event";
static char lab2_1_intefaces_custom__srv__AddFourInts_Request__TYPE_NAME[] = "lab2_1_intefaces_custom/srv/AddFourInts_Request";
static char lab2_1_intefaces_custom__srv__AddFourInts_Response__TYPE_NAME[] = "lab2_1_intefaces_custom/srv/AddFourInts_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char lab2_1_intefaces_custom__srv__AddFourInts__FIELD_NAME__request_message[] = "request_message";
static char lab2_1_intefaces_custom__srv__AddFourInts__FIELD_NAME__response_message[] = "response_message";
static char lab2_1_intefaces_custom__srv__AddFourInts__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field lab2_1_intefaces_custom__srv__AddFourInts__FIELDS[] = {
  {
    {lab2_1_intefaces_custom__srv__AddFourInts__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {lab2_1_intefaces_custom__srv__AddFourInts_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {lab2_1_intefaces_custom__srv__AddFourInts__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {lab2_1_intefaces_custom__srv__AddFourInts_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {lab2_1_intefaces_custom__srv__AddFourInts__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {lab2_1_intefaces_custom__srv__AddFourInts_Event__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription lab2_1_intefaces_custom__srv__AddFourInts__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Event__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
lab2_1_intefaces_custom__srv__AddFourInts__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {lab2_1_intefaces_custom__srv__AddFourInts__TYPE_NAME, 39, 39},
      {lab2_1_intefaces_custom__srv__AddFourInts__FIELDS, 3, 3},
    },
    {lab2_1_intefaces_custom__srv__AddFourInts__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = lab2_1_intefaces_custom__srv__AddFourInts_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = lab2_1_intefaces_custom__srv__AddFourInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = lab2_1_intefaces_custom__srv__AddFourInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char lab2_1_intefaces_custom__srv__AddFourInts_Request__FIELD_NAME__a[] = "a";
static char lab2_1_intefaces_custom__srv__AddFourInts_Request__FIELD_NAME__b[] = "b";
static char lab2_1_intefaces_custom__srv__AddFourInts_Request__FIELD_NAME__c[] = "c";
static char lab2_1_intefaces_custom__srv__AddFourInts_Request__FIELD_NAME__d[] = "d";

static rosidl_runtime_c__type_description__Field lab2_1_intefaces_custom__srv__AddFourInts_Request__FIELDS[] = {
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Request__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Request__FIELD_NAME__c, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Request__FIELD_NAME__d, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
lab2_1_intefaces_custom__srv__AddFourInts_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {lab2_1_intefaces_custom__srv__AddFourInts_Request__TYPE_NAME, 47, 47},
      {lab2_1_intefaces_custom__srv__AddFourInts_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char lab2_1_intefaces_custom__srv__AddFourInts_Response__FIELD_NAME__sum[] = "sum";

static rosidl_runtime_c__type_description__Field lab2_1_intefaces_custom__srv__AddFourInts_Response__FIELDS[] = {
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Response__FIELD_NAME__sum, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
lab2_1_intefaces_custom__srv__AddFourInts_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {lab2_1_intefaces_custom__srv__AddFourInts_Response__TYPE_NAME, 48, 48},
      {lab2_1_intefaces_custom__srv__AddFourInts_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char lab2_1_intefaces_custom__srv__AddFourInts_Event__FIELD_NAME__info[] = "info";
static char lab2_1_intefaces_custom__srv__AddFourInts_Event__FIELD_NAME__request[] = "request";
static char lab2_1_intefaces_custom__srv__AddFourInts_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field lab2_1_intefaces_custom__srv__AddFourInts_Event__FIELDS[] = {
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {lab2_1_intefaces_custom__srv__AddFourInts_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {lab2_1_intefaces_custom__srv__AddFourInts_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription lab2_1_intefaces_custom__srv__AddFourInts_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {lab2_1_intefaces_custom__srv__AddFourInts_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
lab2_1_intefaces_custom__srv__AddFourInts_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {lab2_1_intefaces_custom__srv__AddFourInts_Event__TYPE_NAME, 45, 45},
      {lab2_1_intefaces_custom__srv__AddFourInts_Event__FIELDS, 3, 3},
    },
    {lab2_1_intefaces_custom__srv__AddFourInts_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = lab2_1_intefaces_custom__srv__AddFourInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = lab2_1_intefaces_custom__srv__AddFourInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 a\n"
  "int64 b\n"
  "int64 c\n"
  "int64 d\n"
  "---\n"
  "int64 sum";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
lab2_1_intefaces_custom__srv__AddFourInts__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {lab2_1_intefaces_custom__srv__AddFourInts__TYPE_NAME, 39, 39},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 46, 46},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
lab2_1_intefaces_custom__srv__AddFourInts_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {lab2_1_intefaces_custom__srv__AddFourInts_Request__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
lab2_1_intefaces_custom__srv__AddFourInts_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {lab2_1_intefaces_custom__srv__AddFourInts_Response__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
lab2_1_intefaces_custom__srv__AddFourInts_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {lab2_1_intefaces_custom__srv__AddFourInts_Event__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
lab2_1_intefaces_custom__srv__AddFourInts__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *lab2_1_intefaces_custom__srv__AddFourInts__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *lab2_1_intefaces_custom__srv__AddFourInts_Event__get_individual_type_description_source(NULL);
    sources[3] = *lab2_1_intefaces_custom__srv__AddFourInts_Request__get_individual_type_description_source(NULL);
    sources[4] = *lab2_1_intefaces_custom__srv__AddFourInts_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
lab2_1_intefaces_custom__srv__AddFourInts_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *lab2_1_intefaces_custom__srv__AddFourInts_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
lab2_1_intefaces_custom__srv__AddFourInts_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *lab2_1_intefaces_custom__srv__AddFourInts_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
lab2_1_intefaces_custom__srv__AddFourInts_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *lab2_1_intefaces_custom__srv__AddFourInts_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *lab2_1_intefaces_custom__srv__AddFourInts_Request__get_individual_type_description_source(NULL);
    sources[3] = *lab2_1_intefaces_custom__srv__AddFourInts_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
