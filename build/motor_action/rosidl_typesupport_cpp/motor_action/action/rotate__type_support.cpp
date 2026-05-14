// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from motor_action:action/Rotate.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "motor_action/action/detail/rotate__functions.h"
#include "motor_action/action/detail/rotate__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Rotate_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Rotate_Goal_type_support_ids_t;

static const _Rotate_Goal_type_support_ids_t _Rotate_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Rotate_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Rotate_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Rotate_Goal_type_support_symbol_names_t _Rotate_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_action, action, Rotate_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_action, action, Rotate_Goal)),
  }
};

typedef struct _Rotate_Goal_type_support_data_t
{
  void * data[2];
} _Rotate_Goal_type_support_data_t;

static _Rotate_Goal_type_support_data_t _Rotate_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Rotate_Goal_message_typesupport_map = {
  2,
  "motor_action",
  &_Rotate_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Rotate_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Rotate_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Rotate_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Rotate_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_action__action__Rotate_Goal__get_type_hash,
  &motor_action__action__Rotate_Goal__get_type_description,
  &motor_action__action__Rotate_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_action::action::Rotate_Goal>()
{
  return &::motor_action::action::rosidl_typesupport_cpp::Rotate_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate_Goal)() {
  return get_message_type_support_handle<motor_action::action::Rotate_Goal>();
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
// #include "motor_action/action/detail/rotate__functions.h"
// already included above
// #include "motor_action/action/detail/rotate__struct.hpp"
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

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Rotate_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Rotate_Result_type_support_ids_t;

static const _Rotate_Result_type_support_ids_t _Rotate_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Rotate_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Rotate_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Rotate_Result_type_support_symbol_names_t _Rotate_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_action, action, Rotate_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_action, action, Rotate_Result)),
  }
};

typedef struct _Rotate_Result_type_support_data_t
{
  void * data[2];
} _Rotate_Result_type_support_data_t;

static _Rotate_Result_type_support_data_t _Rotate_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Rotate_Result_message_typesupport_map = {
  2,
  "motor_action",
  &_Rotate_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Rotate_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Rotate_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Rotate_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Rotate_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_action__action__Rotate_Result__get_type_hash,
  &motor_action__action__Rotate_Result__get_type_description,
  &motor_action__action__Rotate_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_action::action::Rotate_Result>()
{
  return &::motor_action::action::rosidl_typesupport_cpp::Rotate_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate_Result)() {
  return get_message_type_support_handle<motor_action::action::Rotate_Result>();
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
// #include "motor_action/action/detail/rotate__functions.h"
// already included above
// #include "motor_action/action/detail/rotate__struct.hpp"
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

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Rotate_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Rotate_Feedback_type_support_ids_t;

static const _Rotate_Feedback_type_support_ids_t _Rotate_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Rotate_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Rotate_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Rotate_Feedback_type_support_symbol_names_t _Rotate_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_action, action, Rotate_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_action, action, Rotate_Feedback)),
  }
};

typedef struct _Rotate_Feedback_type_support_data_t
{
  void * data[2];
} _Rotate_Feedback_type_support_data_t;

static _Rotate_Feedback_type_support_data_t _Rotate_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Rotate_Feedback_message_typesupport_map = {
  2,
  "motor_action",
  &_Rotate_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Rotate_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Rotate_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Rotate_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Rotate_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_action__action__Rotate_Feedback__get_type_hash,
  &motor_action__action__Rotate_Feedback__get_type_description,
  &motor_action__action__Rotate_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_action::action::Rotate_Feedback>()
{
  return &::motor_action::action::rosidl_typesupport_cpp::Rotate_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate_Feedback)() {
  return get_message_type_support_handle<motor_action::action::Rotate_Feedback>();
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
// #include "motor_action/action/detail/rotate__functions.h"
// already included above
// #include "motor_action/action/detail/rotate__struct.hpp"
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

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Rotate_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Rotate_SendGoal_Request_type_support_ids_t;

static const _Rotate_SendGoal_Request_type_support_ids_t _Rotate_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Rotate_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Rotate_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Rotate_SendGoal_Request_type_support_symbol_names_t _Rotate_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_action, action, Rotate_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_action, action, Rotate_SendGoal_Request)),
  }
};

typedef struct _Rotate_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Rotate_SendGoal_Request_type_support_data_t;

static _Rotate_SendGoal_Request_type_support_data_t _Rotate_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Rotate_SendGoal_Request_message_typesupport_map = {
  2,
  "motor_action",
  &_Rotate_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Rotate_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Rotate_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Rotate_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Rotate_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_action__action__Rotate_SendGoal_Request__get_type_hash,
  &motor_action__action__Rotate_SendGoal_Request__get_type_description,
  &motor_action__action__Rotate_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_action::action::Rotate_SendGoal_Request>()
{
  return &::motor_action::action::rosidl_typesupport_cpp::Rotate_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate_SendGoal_Request)() {
  return get_message_type_support_handle<motor_action::action::Rotate_SendGoal_Request>();
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
// #include "motor_action/action/detail/rotate__functions.h"
// already included above
// #include "motor_action/action/detail/rotate__struct.hpp"
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

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Rotate_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Rotate_SendGoal_Response_type_support_ids_t;

static const _Rotate_SendGoal_Response_type_support_ids_t _Rotate_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Rotate_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Rotate_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Rotate_SendGoal_Response_type_support_symbol_names_t _Rotate_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_action, action, Rotate_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_action, action, Rotate_SendGoal_Response)),
  }
};

typedef struct _Rotate_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Rotate_SendGoal_Response_type_support_data_t;

static _Rotate_SendGoal_Response_type_support_data_t _Rotate_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Rotate_SendGoal_Response_message_typesupport_map = {
  2,
  "motor_action",
  &_Rotate_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Rotate_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Rotate_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Rotate_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Rotate_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_action__action__Rotate_SendGoal_Response__get_type_hash,
  &motor_action__action__Rotate_SendGoal_Response__get_type_description,
  &motor_action__action__Rotate_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_action::action::Rotate_SendGoal_Response>()
{
  return &::motor_action::action::rosidl_typesupport_cpp::Rotate_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate_SendGoal_Response)() {
  return get_message_type_support_handle<motor_action::action::Rotate_SendGoal_Response>();
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
// #include "motor_action/action/detail/rotate__functions.h"
// already included above
// #include "motor_action/action/detail/rotate__struct.hpp"
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

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Rotate_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Rotate_SendGoal_Event_type_support_ids_t;

static const _Rotate_SendGoal_Event_type_support_ids_t _Rotate_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Rotate_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Rotate_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Rotate_SendGoal_Event_type_support_symbol_names_t _Rotate_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_action, action, Rotate_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_action, action, Rotate_SendGoal_Event)),
  }
};

typedef struct _Rotate_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _Rotate_SendGoal_Event_type_support_data_t;

static _Rotate_SendGoal_Event_type_support_data_t _Rotate_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Rotate_SendGoal_Event_message_typesupport_map = {
  2,
  "motor_action",
  &_Rotate_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Rotate_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Rotate_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Rotate_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Rotate_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_action__action__Rotate_SendGoal_Event__get_type_hash,
  &motor_action__action__Rotate_SendGoal_Event__get_type_description,
  &motor_action__action__Rotate_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_action::action::Rotate_SendGoal_Event>()
{
  return &::motor_action::action::rosidl_typesupport_cpp::Rotate_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate_SendGoal_Event)() {
  return get_message_type_support_handle<motor_action::action::Rotate_SendGoal_Event>();
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
// #include "motor_action/action/detail/rotate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Rotate_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Rotate_SendGoal_type_support_ids_t;

static const _Rotate_SendGoal_type_support_ids_t _Rotate_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Rotate_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Rotate_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Rotate_SendGoal_type_support_symbol_names_t _Rotate_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_action, action, Rotate_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_action, action, Rotate_SendGoal)),
  }
};

typedef struct _Rotate_SendGoal_type_support_data_t
{
  void * data[2];
} _Rotate_SendGoal_type_support_data_t;

static _Rotate_SendGoal_type_support_data_t _Rotate_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Rotate_SendGoal_service_typesupport_map = {
  2,
  "motor_action",
  &_Rotate_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Rotate_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Rotate_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Rotate_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Rotate_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motor_action::action::Rotate_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motor_action::action::Rotate_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motor_action::action::Rotate_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<motor_action::action::Rotate_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<motor_action::action::Rotate_SendGoal>,
  &motor_action__action__Rotate_SendGoal__get_type_hash,
  &motor_action__action__Rotate_SendGoal__get_type_description,
  &motor_action__action__Rotate_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<motor_action::action::Rotate_SendGoal>()
{
  return &::motor_action::action::rosidl_typesupport_cpp::Rotate_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<motor_action::action::Rotate_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_action/action/detail/rotate__functions.h"
// already included above
// #include "motor_action/action/detail/rotate__struct.hpp"
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

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Rotate_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Rotate_GetResult_Request_type_support_ids_t;

static const _Rotate_GetResult_Request_type_support_ids_t _Rotate_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Rotate_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Rotate_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Rotate_GetResult_Request_type_support_symbol_names_t _Rotate_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_action, action, Rotate_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_action, action, Rotate_GetResult_Request)),
  }
};

typedef struct _Rotate_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Rotate_GetResult_Request_type_support_data_t;

static _Rotate_GetResult_Request_type_support_data_t _Rotate_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Rotate_GetResult_Request_message_typesupport_map = {
  2,
  "motor_action",
  &_Rotate_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Rotate_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Rotate_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Rotate_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Rotate_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_action__action__Rotate_GetResult_Request__get_type_hash,
  &motor_action__action__Rotate_GetResult_Request__get_type_description,
  &motor_action__action__Rotate_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_action::action::Rotate_GetResult_Request>()
{
  return &::motor_action::action::rosidl_typesupport_cpp::Rotate_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate_GetResult_Request)() {
  return get_message_type_support_handle<motor_action::action::Rotate_GetResult_Request>();
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
// #include "motor_action/action/detail/rotate__functions.h"
// already included above
// #include "motor_action/action/detail/rotate__struct.hpp"
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

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Rotate_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Rotate_GetResult_Response_type_support_ids_t;

static const _Rotate_GetResult_Response_type_support_ids_t _Rotate_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Rotate_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Rotate_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Rotate_GetResult_Response_type_support_symbol_names_t _Rotate_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_action, action, Rotate_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_action, action, Rotate_GetResult_Response)),
  }
};

typedef struct _Rotate_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Rotate_GetResult_Response_type_support_data_t;

static _Rotate_GetResult_Response_type_support_data_t _Rotate_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Rotate_GetResult_Response_message_typesupport_map = {
  2,
  "motor_action",
  &_Rotate_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Rotate_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Rotate_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Rotate_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Rotate_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_action__action__Rotate_GetResult_Response__get_type_hash,
  &motor_action__action__Rotate_GetResult_Response__get_type_description,
  &motor_action__action__Rotate_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_action::action::Rotate_GetResult_Response>()
{
  return &::motor_action::action::rosidl_typesupport_cpp::Rotate_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate_GetResult_Response)() {
  return get_message_type_support_handle<motor_action::action::Rotate_GetResult_Response>();
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
// #include "motor_action/action/detail/rotate__functions.h"
// already included above
// #include "motor_action/action/detail/rotate__struct.hpp"
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

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Rotate_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Rotate_GetResult_Event_type_support_ids_t;

static const _Rotate_GetResult_Event_type_support_ids_t _Rotate_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Rotate_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Rotate_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Rotate_GetResult_Event_type_support_symbol_names_t _Rotate_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_action, action, Rotate_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_action, action, Rotate_GetResult_Event)),
  }
};

typedef struct _Rotate_GetResult_Event_type_support_data_t
{
  void * data[2];
} _Rotate_GetResult_Event_type_support_data_t;

static _Rotate_GetResult_Event_type_support_data_t _Rotate_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Rotate_GetResult_Event_message_typesupport_map = {
  2,
  "motor_action",
  &_Rotate_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Rotate_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Rotate_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Rotate_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Rotate_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_action__action__Rotate_GetResult_Event__get_type_hash,
  &motor_action__action__Rotate_GetResult_Event__get_type_description,
  &motor_action__action__Rotate_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_action::action::Rotate_GetResult_Event>()
{
  return &::motor_action::action::rosidl_typesupport_cpp::Rotate_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate_GetResult_Event)() {
  return get_message_type_support_handle<motor_action::action::Rotate_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "motor_action/action/detail/rotate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Rotate_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Rotate_GetResult_type_support_ids_t;

static const _Rotate_GetResult_type_support_ids_t _Rotate_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Rotate_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Rotate_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Rotate_GetResult_type_support_symbol_names_t _Rotate_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_action, action, Rotate_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_action, action, Rotate_GetResult)),
  }
};

typedef struct _Rotate_GetResult_type_support_data_t
{
  void * data[2];
} _Rotate_GetResult_type_support_data_t;

static _Rotate_GetResult_type_support_data_t _Rotate_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Rotate_GetResult_service_typesupport_map = {
  2,
  "motor_action",
  &_Rotate_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Rotate_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Rotate_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Rotate_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Rotate_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motor_action::action::Rotate_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motor_action::action::Rotate_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<motor_action::action::Rotate_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<motor_action::action::Rotate_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<motor_action::action::Rotate_GetResult>,
  &motor_action__action__Rotate_GetResult__get_type_hash,
  &motor_action__action__Rotate_GetResult__get_type_description,
  &motor_action__action__Rotate_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<motor_action::action::Rotate_GetResult>()
{
  return &::motor_action::action::rosidl_typesupport_cpp::Rotate_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<motor_action::action::Rotate_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "motor_action/action/detail/rotate__functions.h"
// already included above
// #include "motor_action/action/detail/rotate__struct.hpp"
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

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _Rotate_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Rotate_FeedbackMessage_type_support_ids_t;

static const _Rotate_FeedbackMessage_type_support_ids_t _Rotate_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Rotate_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Rotate_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Rotate_FeedbackMessage_type_support_symbol_names_t _Rotate_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_action, action, Rotate_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_action, action, Rotate_FeedbackMessage)),
  }
};

typedef struct _Rotate_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Rotate_FeedbackMessage_type_support_data_t;

static _Rotate_FeedbackMessage_type_support_data_t _Rotate_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Rotate_FeedbackMessage_message_typesupport_map = {
  2,
  "motor_action",
  &_Rotate_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Rotate_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Rotate_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Rotate_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Rotate_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &motor_action__action__Rotate_FeedbackMessage__get_type_hash,
  &motor_action__action__Rotate_FeedbackMessage__get_type_description,
  &motor_action__action__Rotate_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_action::action::Rotate_FeedbackMessage>()
{
  return &::motor_action::action::rosidl_typesupport_cpp::Rotate_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate_FeedbackMessage)() {
  return get_message_type_support_handle<motor_action::action::Rotate_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "motor_action/action/detail/rotate__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace motor_action
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t Rotate_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &motor_action__action__Rotate__get_type_hash,
  &motor_action__action__Rotate__get_type_description,
  &motor_action__action__Rotate__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace motor_action

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<motor_action::action::Rotate>()
{
  using ::motor_action::action::rosidl_typesupport_cpp::Rotate_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Rotate_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::motor_action::action::Rotate::Impl::SendGoalService>();
  Rotate_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::motor_action::action::Rotate::Impl::GetResultService>();
  Rotate_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::motor_action::action::Rotate::Impl::CancelGoalService>();
  Rotate_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::motor_action::action::Rotate::Impl::FeedbackMessage>();
  Rotate_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::motor_action::action::Rotate::Impl::GoalStatusMessage>();
  return &Rotate_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, motor_action, action, Rotate)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<motor_action::action::Rotate>();
}

#ifdef __cplusplus
}
#endif
