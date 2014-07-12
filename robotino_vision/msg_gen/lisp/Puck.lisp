; Auto-generated. Do not edit!


(cl:in-package robotino_vision-msg)


;//! \htmlinclude Puck.msg.html

(cl:defclass <Puck> (roslisp-msg-protocol:ros-message)
  ((distance
    :reader distance
    :initarg :distance
    :type cl:float
    :initform 0.0)
   (direction
    :reader direction
    :initarg :direction
    :type cl:float
    :initform 0.0))
)

(cl:defclass Puck (<Puck>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Puck>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Puck)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_vision-msg:<Puck> is deprecated: use robotino_vision-msg:Puck instead.")))

(cl:ensure-generic-function 'distance-val :lambda-list '(m))
(cl:defmethod distance-val ((m <Puck>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:distance-val is deprecated.  Use robotino_vision-msg:distance instead.")
  (distance m))

(cl:ensure-generic-function 'direction-val :lambda-list '(m))
(cl:defmethod direction-val ((m <Puck>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:direction-val is deprecated.  Use robotino_vision-msg:direction instead.")
  (direction m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<Puck>)))
    "Constants for message type '<Puck>"
  '((:COLOR . "orange"			# puck color))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'Puck)))
    "Constants for message type 'Puck"
  '((:COLOR . "orange"			# puck color))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Puck>) ostream)
  "Serializes a message object of type '<Puck>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'distance))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'direction))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Puck>) istream)
  "Deserializes a message object of type '<Puck>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'distance) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'direction) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Puck>)))
  "Returns string type for a message object of type '<Puck>"
  "robotino_vision/Puck")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Puck)))
  "Returns string type for a message object of type 'Puck"
  "robotino_vision/Puck")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Puck>)))
  "Returns md5sum for a message object of type '<Puck>"
  "863f0d057c493bd447b19804f958dbc6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Puck)))
  "Returns md5sum for a message object of type 'Puck"
  "863f0d057c493bd447b19804f958dbc6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Puck>)))
  "Returns full string definition for message of type '<Puck>"
  (cl:format cl:nil "float32 distance			# puck distance in meters~%float32 direction			# puck direction in degrees~%string color=\"orange\"			# puck color~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Puck)))
  "Returns full string definition for message of type 'Puck"
  (cl:format cl:nil "float32 distance			# puck distance in meters~%float32 direction			# puck direction in degrees~%string color=\"orange\"			# puck color~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Puck>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Puck>))
  "Converts a ROS message object to a list"
  (cl:list 'Puck
    (cl:cons ':distance (distance msg))
    (cl:cons ':direction (direction msg))
))
