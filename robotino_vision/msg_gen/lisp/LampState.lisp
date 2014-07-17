; Auto-generated. Do not edit!


(cl:in-package robotino_vision-msg)


;//! \htmlinclude LampState.msg.html

(cl:defclass <LampState> (roslisp-msg-protocol:ros-message)
  ((color
    :reader color
    :initarg :color
    :type cl:string
    :initform "")
   (isLighting
    :reader isLighting
    :initarg :isLighting
    :type cl:boolean
    :initform cl:nil)
   (at
    :reader at
    :initarg :at
    :type cl:real
    :initform 0))
)

(cl:defclass LampState (<LampState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LampState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LampState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_vision-msg:<LampState> is deprecated: use robotino_vision-msg:LampState instead.")))

(cl:ensure-generic-function 'color-val :lambda-list '(m))
(cl:defmethod color-val ((m <LampState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:color-val is deprecated.  Use robotino_vision-msg:color instead.")
  (color m))

(cl:ensure-generic-function 'isLighting-val :lambda-list '(m))
(cl:defmethod isLighting-val ((m <LampState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:isLighting-val is deprecated.  Use robotino_vision-msg:isLighting instead.")
  (isLighting m))

(cl:ensure-generic-function 'at-val :lambda-list '(m))
(cl:defmethod at-val ((m <LampState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:at-val is deprecated.  Use robotino_vision-msg:at instead.")
  (at m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LampState>) ostream)
  "Serializes a message object of type '<LampState>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'color))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'color))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'isLighting) 1 0)) ostream)
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
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LampState>) istream)
  "Deserializes a message object of type '<LampState>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'color) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'color) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:slot-value msg 'isLighting) (cl:not (cl:zerop (cl:read-byte istream))))
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LampState>)))
  "Returns string type for a message object of type '<LampState>"
  "robotino_vision/LampState")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LampState)))
  "Returns string type for a message object of type 'LampState"
  "robotino_vision/LampState")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LampState>)))
  "Returns md5sum for a message object of type '<LampState>"
  "8f2944571279d0367e33f9f0fb46ac2d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LampState)))
  "Returns md5sum for a message object of type 'LampState"
  "8f2944571279d0367e33f9f0fb46ac2d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LampState>)))
  "Returns full string definition for message of type '<LampState>"
  (cl:format cl:nil "string color		# lamp color~%bool isLighting		# true if this lamp is lighting and false if this lamp is not.~%time at			# Time at which this had been stimated~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LampState)))
  "Returns full string definition for message of type 'LampState"
  (cl:format cl:nil "string color		# lamp color~%bool isLighting		# true if this lamp is lighting and false if this lamp is not.~%time at			# Time at which this had been stimated~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LampState>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'color))
     1
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LampState>))
  "Converts a ROS message object to a list"
  (cl:list 'LampState
    (cl:cons ':color (color msg))
    (cl:cons ':isLighting (isLighting msg))
    (cl:cons ':at (at msg))
))
