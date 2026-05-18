// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_action:action/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_action/action/move.hpp"


#ifndef MOTOR_ACTION__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define MOTOR_ACTION__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_action/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_action
{

namespace action
{

namespace builder
{

class Init_Move_Goal_angles
{
public:
  Init_Move_Goal_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_action::action::Move_Goal angles(::motor_action::action::Move_Goal::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_action::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_action::action::Move_Goal>()
{
  return motor_action::action::builder::Init_Move_Goal_angles();
}

}  // namespace motor_action


namespace motor_action
{

namespace action
{

namespace builder
{

class Init_Move_Result_success
{
public:
  Init_Move_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_action::action::Move_Result success(::motor_action::action::Move_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_action::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_action::action::Move_Result>()
{
  return motor_action::action::builder::Init_Move_Result_success();
}

}  // namespace motor_action


namespace motor_action
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_action::action::Move_Feedback>()
{
  return ::motor_action::action::Move_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace motor_action


namespace motor_action
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::motor_action::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::motor_action::action::Move_SendGoal_Request goal(::motor_action::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_action::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::motor_action::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::motor_action::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_action::action::Move_SendGoal_Request>()
{
  return motor_action::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace motor_action


namespace motor_action
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::motor_action::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::motor_action::action::Move_SendGoal_Response stamp(::motor_action::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_action::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::motor_action::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::motor_action::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_action::action::Move_SendGoal_Response>()
{
  return motor_action::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace motor_action


namespace motor_action
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Event_response
{
public:
  explicit Init_Move_SendGoal_Event_response(::motor_action::action::Move_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::motor_action::action::Move_SendGoal_Event response(::motor_action::action::Move_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_action::action::Move_SendGoal_Event msg_;
};

class Init_Move_SendGoal_Event_request
{
public:
  explicit Init_Move_SendGoal_Event_request(::motor_action::action::Move_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Move_SendGoal_Event_response request(::motor_action::action::Move_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Move_SendGoal_Event_response(msg_);
  }

private:
  ::motor_action::action::Move_SendGoal_Event msg_;
};

class Init_Move_SendGoal_Event_info
{
public:
  Init_Move_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Event_request info(::motor_action::action::Move_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Move_SendGoal_Event_request(msg_);
  }

private:
  ::motor_action::action::Move_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_action::action::Move_SendGoal_Event>()
{
  return motor_action::action::builder::Init_Move_SendGoal_Event_info();
}

}  // namespace motor_action


namespace motor_action
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_action::action::Move_GetResult_Request goal_id(::motor_action::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_action::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_action::action::Move_GetResult_Request>()
{
  return motor_action::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace motor_action


namespace motor_action
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::motor_action::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::motor_action::action::Move_GetResult_Response result(::motor_action::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_action::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::motor_action::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::motor_action::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_action::action::Move_GetResult_Response>()
{
  return motor_action::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace motor_action


namespace motor_action
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Event_response
{
public:
  explicit Init_Move_GetResult_Event_response(::motor_action::action::Move_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::motor_action::action::Move_GetResult_Event response(::motor_action::action::Move_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_action::action::Move_GetResult_Event msg_;
};

class Init_Move_GetResult_Event_request
{
public:
  explicit Init_Move_GetResult_Event_request(::motor_action::action::Move_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Move_GetResult_Event_response request(::motor_action::action::Move_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Move_GetResult_Event_response(msg_);
  }

private:
  ::motor_action::action::Move_GetResult_Event msg_;
};

class Init_Move_GetResult_Event_info
{
public:
  Init_Move_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Event_request info(::motor_action::action::Move_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Move_GetResult_Event_request(msg_);
  }

private:
  ::motor_action::action::Move_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_action::action::Move_GetResult_Event>()
{
  return motor_action::action::builder::Init_Move_GetResult_Event_info();
}

}  // namespace motor_action


namespace motor_action
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::motor_action::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::motor_action::action::Move_FeedbackMessage feedback(::motor_action::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_action::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::motor_action::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::motor_action::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_action::action::Move_FeedbackMessage>()
{
  return motor_action::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace motor_action

#endif  // MOTOR_ACTION__ACTION__DETAIL__MOVE__BUILDER_HPP_
