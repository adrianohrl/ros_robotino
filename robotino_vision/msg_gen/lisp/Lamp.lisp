; Auto-generated. Do not edit!


(cl:in-package robotino_vision-msg)


;//! \htmlinclude Lamp.msg.html

(cl:defclass <Lamp> (roslisp-msg-protocol:ros-message)
  ((color
    :reader color
    :initarg :color
    :type cl:string
    :initform "")
   (isLighting
    :reader isLighting
    :initarg :isLighting
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Lamp (<Lamp>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Lamp>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Lamp)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_vision-msg:<Lamp> is deprecated: use robotino_vision-msg:Lamp instead.")))

(cl:ensure-generic-function 'color-val :lambda-list '(m))
(cl:defmethod color-val ((m <Lamp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:color-val is deprecated.  Use robotino_vision-msg:color instead.")
  (color m))

(cl:ensure-generic-function 'isLighting-val :lambda-list '(m))
(cl:defmethod isLighting-val ((m <Lamp>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:isLighting-val is deprecated.  Use robotino_vision-msg:isLighting instead.")
  (isLighting m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Lamp>) ostream)
  "Serializes a message object of type '<Lamp>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'color))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'color))
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'isLighting) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Lamp>) istream)
  "Deserializes a message object of type '<Lamp>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'color) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'color) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:setf (cl:slot-value msg 'isLighting) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Lamp>)))
  "Returns string type for a message object of type '<Lamp>"
  "robotino_vision/Lamp")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Lamp)))
  "Returns string type for a message object of type 'Lamp"
  "robotino_vision/Lamp")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Lamp>)))
  "Returns md5sum for a message object of type '<Lamp>"
  "cd24d8dd092f92fe655f3837e1057c3c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Lamp)))
  "Returns md5sum for a message object of type 'Lamp"
  "cd24d8dd092f92fe655f3837e1057c3c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Lamp>)))
  "Returns full string definition for message of type '<Lamp>"
  (cl:format cl:nil "string color		# lamp color~%bool isLighting		# true if this lamp is lighting and false if this lamp is not.~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Lamp)))
  "Returns full string definition for message of type 'Lamp"
  (cl:format cl:nil "string color		# lamp color~%bool isLighting		# true if this lamp is lighting and false if this lamp is not.~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Lamp>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'color))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Lamp>))
  "Converts a ROS message object to a list"
  (cl:list 'Lamp
    (cl:cons ':color (color msg))
    (cl:cons ':isLighting (isLighting msg))
))
