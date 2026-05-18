// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_action:action/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_action/action/move.h"


#ifndef MOTOR_ACTION__ACTION__DETAIL__MOVE__STRUCT_H_
#define MOTOR_ACTION__ACTION__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'angles'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Move in the package motor_action.
typedef struct motor_action__action__Move_Goal
{
  rosidl_runtime_c__int32__Sequence angles;
} motor_action__action__Move_Goal;

// Struct for a sequence of motor_action__action__Move_Goal.
typedef struct motor_action__action__Move_Goal__Sequence
{
  motor_action__action__Move_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_action__action__Move_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/Move in the package motor_action.
typedef struct motor_action__action__Move_Result
{
  bool success;
} motor_action__action__Move_Result;

// Struct for a sequence of motor_action__action__Move_Result.
typedef struct motor_action__action__Move_Result__Sequence
{
  motor_action__action__Move_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_action__action__Move_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/Move in the package motor_action.
typedef struct motor_action__action__Move_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} motor_action__action__Move_Feedback;

// Struct for a sequence of motor_action__action__Move_Feedback.
typedef struct motor_action__action__Move_Feedback__Sequence
{
  motor_action__action__Move_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_action__action__Move_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "motor_action/action/detail/move__struct.h"

/// Struct defined in action/Move in the package motor_action.
typedef struct motor_action__action__Move_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  motor_action__action__Move_Goal goal;
} motor_action__action__Move_SendGoal_Request;

// Struct for a sequence of motor_action__action__Move_SendGoal_Request.
typedef struct motor_action__action__Move_SendGoal_Request__Sequence
{
  motor_action__action__Move_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_action__action__Move_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Move in the package motor_action.
typedef struct motor_action__action__Move_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} motor_action__action__Move_SendGoal_Response;

// Struct for a sequence of motor_action__action__Move_SendGoal_Response.
typedef struct motor_action__action__Move_SendGoal_Response__Sequence
{
  motor_action__action__Move_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_action__action__Move_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  motor_action__action__Move_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  motor_action__action__Move_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Move in the package motor_action.
typedef struct motor_action__action__Move_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  motor_action__action__Move_SendGoal_Request__Sequence request;
  motor_action__action__Move_SendGoal_Response__Sequence response;
} motor_action__action__Move_SendGoal_Event;

// Struct for a sequence of motor_action__action__Move_SendGoal_Event.
typedef struct motor_action__action__Move_SendGoal_Event__Sequence
{
  motor_action__action__Move_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_action__action__Move_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Move in the package motor_action.
typedef struct motor_action__action__Move_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} motor_action__action__Move_GetResult_Request;

// Struct for a sequence of motor_action__action__Move_GetResult_Request.
typedef struct motor_action__action__Move_GetResult_Request__Sequence
{
  motor_action__action__Move_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_action__action__Move_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "motor_action/action/detail/move__struct.h"

/// Struct defined in action/Move in the package motor_action.
typedef struct motor_action__action__Move_GetResult_Response
{
  int8_t status;
  motor_action__action__Move_Result result;
} motor_action__action__Move_GetResult_Response;

// Struct for a sequence of motor_action__action__Move_GetResult_Response.
typedef struct motor_action__action__Move_GetResult_Response__Sequence
{
  motor_action__action__Move_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_action__action__Move_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  motor_action__action__Move_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  motor_action__action__Move_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Move in the package motor_action.
typedef struct motor_action__action__Move_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  motor_action__action__Move_GetResult_Request__Sequence request;
  motor_action__action__Move_GetResult_Response__Sequence response;
} motor_action__action__Move_GetResult_Event;

// Struct for a sequence of motor_action__action__Move_GetResult_Event.
typedef struct motor_action__action__Move_GetResult_Event__Sequence
{
  motor_action__action__Move_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_action__action__Move_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "motor_action/action/detail/move__struct.h"

/// Struct defined in action/Move in the package motor_action.
typedef struct motor_action__action__Move_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  motor_action__action__Move_Feedback feedback;
} motor_action__action__Move_FeedbackMessage;

// Struct for a sequence of motor_action__action__Move_FeedbackMessage.
typedef struct motor_action__action__Move_FeedbackMessage__Sequence
{
  motor_action__action__Move_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_action__action__Move_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_ACTION__ACTION__DETAIL__MOVE__STRUCT_H_
