; Auto-generated. Do not edit!


(cl:in-package robotino_vision-msg)


;//! \htmlinclude PuckState.msg.html

(cl:defclass <PuckState> (roslisp-msg-protocol:ros-message)
  ((distance
    :reader distance
    :initarg :distance
    :type cl:float
    :initform 0.0)
   (direction
    :reader direction
    :initarg :direction
    :type cl:float
    :initform 0.0)
   (at
    :reader at
    :initarg :at
    :type cl:real
    :initform 0))
)

(cl:defclass PuckState (<PuckState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PuckState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PuckState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_vision-msg:<PuckState> is deprecated: use robotino_vision-msg:PuckState instead.")))

(cl:ensure-generic-function 'distance-val :lambda-list '(m))
(cl:defmethod distance-val ((m <PuckState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:distance-val is deprecated.  Use robotino_vision-msg:distance instead.")
  (distance m))

(cl:ensure-generic-function 'direction-val :lambda-list '(m))
(cl:defmethod direction-val ((m <PuckState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:direction-val is deprecated.  Use robotino_vision-msg:direction instead.")
  (direction m))

(cl:ensure-generic-function 'at-val :lambda-list '(m))
(cl:defmethod at-val ((m <PuckState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:at-val is deprecated.  Use robotino_vision-msg:at instead.")
  (at m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<PuckState>)))
    "Constants for message type '<PuckState>"
  '((:COLOR . "orange"			# puck color))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'PuckState)))
    "Constants for message type 'PuckState"
  '((:COLOR . "orange"			# puck color))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PuckState>) ostream)
  "Serializes a message object of type '<PuckState>"
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
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'at)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'at) (cl:floor (cl:slot-value msg 'at)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PuckState>) istream)
  "Deserializes a message object of type '<PuckState>"
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
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'at) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PuckState>)))
  "Returns string type for a message object of type '<PuckState>"
  "robotino_vision/PuckState")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PuckState)))
  "Returns string type for a message object of type 'PuckState"
  "robotino_vision/PuckState")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PuckState>)))
  "Returns md5sum for a message object of type '<PuckState>"
  "525ea9860e0dbc5e321b446d46091c12")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PuckState)))
  "Returns md5sum for a message object of type 'PuckState"
  "525ea9860e0dbc5e321b446d46091c12")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PuckState>)))
  "Returns full string definition for message of type '<PuckState>"
  (cl:format cl:nil "float32 distance			# puck distance in meters~%float32 direction			# puck direction in degrees~%string color=\"orange\"			# puck color~%time at					# Time at which this had been stimated~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PuckState)))
  "Returns full string definition for message of type 'PuckState"
  (cl:format cl:nil "float32 distance			# puck distance in meters~%float32 direction			# puck direction in degrees~%string color=\"orange\"			# puck color~%time at					# Time at which this had been stimated~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PuckState>))
  (cl:+ 0
     4
     4
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PuckState>))
  "Converts a ROS message object to a list"
  (cl:list 'PuckState
    (cl:cons ':distance (distance msg))
    (cl:cons ':direction (direction msg))
    (cl:cons ':at (at msg))
))
