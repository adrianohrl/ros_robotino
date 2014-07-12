; Auto-generated. Do not edit!


(cl:in-package robotino_vision-srv)


;//! \htmlinclude GetPucks-request.msg.html

(cl:defclass <GetPucks-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass GetPucks-request (<GetPucks-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetPucks-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetPucks-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_vision-srv:<GetPucks-request> is deprecated: use robotino_vision-srv:GetPucks-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetPucks-request>) ostream)
  "Serializes a message object of type '<GetPucks-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetPucks-request>) istream)
  "Deserializes a message object of type '<GetPucks-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetPucks-request>)))
  "Returns string type for a service object of type '<GetPucks-request>"
  "robotino_vision/GetPucksRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetPucks-request)))
  "Returns string type for a service object of type 'GetPucks-request"
  "robotino_vision/GetPucksRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetPucks-request>)))
  "Returns md5sum for a message object of type '<GetPucks-request>"
  "e5ad1d3c7fcd754f64a9bd6d027b695f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetPucks-request)))
  "Returns md5sum for a message object of type 'GetPucks-request"
  "e5ad1d3c7fcd754f64a9bd6d027b695f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetPucks-request>)))
  "Returns full string definition for message of type '<GetPucks-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetPucks-request)))
  "Returns full string definition for message of type 'GetPucks-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetPucks-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetPucks-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetPucks-request
))
;//! \htmlinclude GetPucks-response.msg.html

(cl:defclass <GetPucks-response> (roslisp-msg-protocol:ros-message)
  ((puck_distance
    :reader puck_distance
    :initarg :puck_distance
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (puck_direction
    :reader puck_direction
    :initarg :puck_direction
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass GetPucks-response (<GetPucks-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetPucks-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetPucks-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_vision-srv:<GetPucks-response> is deprecated: use robotino_vision-srv:GetPucks-response instead.")))

(cl:ensure-generic-function 'puck_distance-val :lambda-list '(m))
(cl:defmethod puck_distance-val ((m <GetPucks-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-srv:puck_distance-val is deprecated.  Use robotino_vision-srv:puck_distance instead.")
  (puck_distance m))

(cl:ensure-generic-function 'puck_direction-val :lambda-list '(m))
(cl:defmethod puck_direction-val ((m <GetPucks-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-srv:puck_direction-val is deprecated.  Use robotino_vision-srv:puck_direction instead.")
  (puck_direction m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetPucks-response>) ostream)
  "Serializes a message object of type '<GetPucks-response>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'puck_distance))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'puck_distance))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'puck_direction))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'puck_direction))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetPucks-response>) istream)
  "Deserializes a message object of type '<GetPucks-response>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'puck_distance) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'puck_distance)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'puck_direction) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'puck_direction)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetPucks-response>)))
  "Returns string type for a service object of type '<GetPucks-response>"
  "robotino_vision/GetPucksResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetPucks-response)))
  "Returns string type for a service object of type 'GetPucks-response"
  "robotino_vision/GetPucksResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetPucks-response>)))
  "Returns md5sum for a message object of type '<GetPucks-response>"
  "e5ad1d3c7fcd754f64a9bd6d027b695f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetPucks-response)))
  "Returns md5sum for a message object of type 'GetPucks-response"
  "e5ad1d3c7fcd754f64a9bd6d027b695f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetPucks-response>)))
  "Returns full string definition for message of type '<GetPucks-response>"
  (cl:format cl:nil "~%float32[] puck_distance~%float32[] puck_direction~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetPucks-response)))
  "Returns full string definition for message of type 'GetPucks-response"
  (cl:format cl:nil "~%float32[] puck_distance~%float32[] puck_direction~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetPucks-response>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'puck_distance) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'puck_direction) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetPucks-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetPucks-response
    (cl:cons ':puck_distance (puck_distance msg))
    (cl:cons ':puck_direction (puck_direction msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetPucks)))
  'GetPucks-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetPucks)))
  'GetPucks-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetPucks)))
  "Returns string type for a service object of type '<GetPucks>"
  "robotino_vision/GetPucks")