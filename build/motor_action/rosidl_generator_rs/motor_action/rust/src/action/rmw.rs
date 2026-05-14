
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "motor_action__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_Goal() -> *const std::ffi::c_void;
}

#[link(name = "motor_action__rosidl_generator_c")]
extern "C" {
    fn motor_action__action__Rotate_Goal__init(msg: *mut Rotate_Goal) -> bool;
    fn motor_action__action__Rotate_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Rotate_Goal>, size: usize) -> bool;
    fn motor_action__action__Rotate_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Rotate_Goal>);
    fn motor_action__action__Rotate_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Rotate_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Rotate_Goal>) -> bool;
}

// Corresponds to motor_action__action__Rotate_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Rotate_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub angles: rosidl_runtime_rs::Sequence<i32>,

}



impl Default for Rotate_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !motor_action__action__Rotate_Goal__init(&mut msg as *mut _) {
        panic!("Call to motor_action__action__Rotate_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Rotate_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Rotate_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Rotate_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "motor_action/action/Rotate_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_Goal() }
  }
}


#[link(name = "motor_action__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_Result() -> *const std::ffi::c_void;
}

#[link(name = "motor_action__rosidl_generator_c")]
extern "C" {
    fn motor_action__action__Rotate_Result__init(msg: *mut Rotate_Result) -> bool;
    fn motor_action__action__Rotate_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Rotate_Result>, size: usize) -> bool;
    fn motor_action__action__Rotate_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Rotate_Result>);
    fn motor_action__action__Rotate_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Rotate_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Rotate_Result>) -> bool;
}

// Corresponds to motor_action__action__Rotate_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Rotate_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for Rotate_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !motor_action__action__Rotate_Result__init(&mut msg as *mut _) {
        panic!("Call to motor_action__action__Rotate_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Rotate_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Rotate_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Rotate_Result where Self: Sized {
  const TYPE_NAME: &'static str = "motor_action/action/Rotate_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_Result() }
  }
}


#[link(name = "motor_action__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "motor_action__rosidl_generator_c")]
extern "C" {
    fn motor_action__action__Rotate_Feedback__init(msg: *mut Rotate_Feedback) -> bool;
    fn motor_action__action__Rotate_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Rotate_Feedback>, size: usize) -> bool;
    fn motor_action__action__Rotate_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Rotate_Feedback>);
    fn motor_action__action__Rotate_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Rotate_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Rotate_Feedback>) -> bool;
}

// Corresponds to motor_action__action__Rotate_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Rotate_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Rotate_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !motor_action__action__Rotate_Feedback__init(&mut msg as *mut _) {
        panic!("Call to motor_action__action__Rotate_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Rotate_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Rotate_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Rotate_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "motor_action/action/Rotate_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_Feedback() }
  }
}


#[link(name = "motor_action__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "motor_action__rosidl_generator_c")]
extern "C" {
    fn motor_action__action__Rotate_FeedbackMessage__init(msg: *mut Rotate_FeedbackMessage) -> bool;
    fn motor_action__action__Rotate_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Rotate_FeedbackMessage>, size: usize) -> bool;
    fn motor_action__action__Rotate_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Rotate_FeedbackMessage>);
    fn motor_action__action__Rotate_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Rotate_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Rotate_FeedbackMessage>) -> bool;
}

// Corresponds to motor_action__action__Rotate_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Rotate_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Rotate_Feedback,

}



impl Default for Rotate_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !motor_action__action__Rotate_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to motor_action__action__Rotate_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Rotate_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Rotate_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Rotate_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "motor_action/action/Rotate_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_FeedbackMessage() }
  }
}




#[link(name = "motor_action__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "motor_action__rosidl_generator_c")]
extern "C" {
    fn motor_action__action__Rotate_SendGoal_Request__init(msg: *mut Rotate_SendGoal_Request) -> bool;
    fn motor_action__action__Rotate_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Rotate_SendGoal_Request>, size: usize) -> bool;
    fn motor_action__action__Rotate_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Rotate_SendGoal_Request>);
    fn motor_action__action__Rotate_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Rotate_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Rotate_SendGoal_Request>) -> bool;
}

// Corresponds to motor_action__action__Rotate_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Rotate_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Rotate_Goal,

}



impl Default for Rotate_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !motor_action__action__Rotate_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to motor_action__action__Rotate_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Rotate_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Rotate_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Rotate_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "motor_action/action/Rotate_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_SendGoal_Request() }
  }
}


#[link(name = "motor_action__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "motor_action__rosidl_generator_c")]
extern "C" {
    fn motor_action__action__Rotate_SendGoal_Response__init(msg: *mut Rotate_SendGoal_Response) -> bool;
    fn motor_action__action__Rotate_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Rotate_SendGoal_Response>, size: usize) -> bool;
    fn motor_action__action__Rotate_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Rotate_SendGoal_Response>);
    fn motor_action__action__Rotate_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Rotate_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Rotate_SendGoal_Response>) -> bool;
}

// Corresponds to motor_action__action__Rotate_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Rotate_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Rotate_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !motor_action__action__Rotate_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to motor_action__action__Rotate_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Rotate_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Rotate_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Rotate_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "motor_action/action/Rotate_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_SendGoal_Response() }
  }
}


#[link(name = "motor_action__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "motor_action__rosidl_generator_c")]
extern "C" {
    fn motor_action__action__Rotate_GetResult_Request__init(msg: *mut Rotate_GetResult_Request) -> bool;
    fn motor_action__action__Rotate_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Rotate_GetResult_Request>, size: usize) -> bool;
    fn motor_action__action__Rotate_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Rotate_GetResult_Request>);
    fn motor_action__action__Rotate_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Rotate_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Rotate_GetResult_Request>) -> bool;
}

// Corresponds to motor_action__action__Rotate_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Rotate_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Rotate_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !motor_action__action__Rotate_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to motor_action__action__Rotate_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Rotate_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Rotate_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Rotate_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "motor_action/action/Rotate_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_GetResult_Request() }
  }
}


#[link(name = "motor_action__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "motor_action__rosidl_generator_c")]
extern "C" {
    fn motor_action__action__Rotate_GetResult_Response__init(msg: *mut Rotate_GetResult_Response) -> bool;
    fn motor_action__action__Rotate_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Rotate_GetResult_Response>, size: usize) -> bool;
    fn motor_action__action__Rotate_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Rotate_GetResult_Response>);
    fn motor_action__action__Rotate_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Rotate_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Rotate_GetResult_Response>) -> bool;
}

// Corresponds to motor_action__action__Rotate_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Rotate_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Rotate_Result,

}



impl Default for Rotate_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !motor_action__action__Rotate_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to motor_action__action__Rotate_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Rotate_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { motor_action__action__Rotate_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Rotate_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Rotate_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "motor_action/action/Rotate_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__motor_action__action__Rotate_GetResult_Response() }
  }
}






#[link(name = "motor_action__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__motor_action__action__Rotate_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to motor_action__action__Rotate_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Rotate_SendGoal;

impl rosidl_runtime_rs::Service for Rotate_SendGoal {
    type Request = Rotate_SendGoal_Request;
    type Response = Rotate_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__motor_action__action__Rotate_SendGoal() }
    }
}




#[link(name = "motor_action__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__motor_action__action__Rotate_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to motor_action__action__Rotate_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Rotate_GetResult;

impl rosidl_runtime_rs::Service for Rotate_GetResult {
    type Request = Rotate_GetResult_Request;
    type Response = Rotate_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__motor_action__action__Rotate_GetResult() }
    }
}


