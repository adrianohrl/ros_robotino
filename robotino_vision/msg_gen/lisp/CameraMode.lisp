; Auto-generated. Do not edit!


(cl:in-package robotino_vision-msg)


;//! \htmlinclude CameraMode.msg.html

(cl:defclass <CameraMode> (roslisp-msg-protocol:ros-message)
  ((mode
    :reader mode
    :initarg :mode
    :type cl:fixnum
    :initform 0))
)

(cl:defclass CameraMode (<CameraMode>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CameraMode>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CameraMode)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_vision-msg:<CameraMode> is deprecated: use robotino_vision-msg:CameraMode instead.")))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <CameraMode>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:mode-val is deprecated.  Use robotino_vision-msg:mode instead.")
  (mode m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CameraMode>) ostream)
  "Serializes a message object of type '<CameraMode>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CameraMode>) istream)
  "Deserializes a message object of type '<CameraMode>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'mode)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CameraMode>)))
  "Returns string type for a message object of type '<CameraMode>"
  "robotino_vision/CameraMode")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CameraMode)))
  "Returns string type for a message object of type 'CameraMode"
  "robotino_vision/CameraMode")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CameraMode>)))
  "Returns md5sum for a message object of type '<CameraMode>"
  "89b81386720be1cd0ce7a3953fcd1b19")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CameraMode)))
  "Returns md5sum for a message object of type 'CameraMode"
  "89b81386720be1cd0ce7a3953fcd1b19")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CameraMode>)))
  "Returns full string definition for message of type '<CameraMode>"
  (cl:format cl:nil "uint8 mode ~%# 0 -> Off Mode~%# 1 -> Get Lamp Post State Mode~%# 2 -> Get Puck State Mode~%# 3 -> ~%# 4 -> ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CameraMode)))
  "Returns full string definition for message of type 'CameraMode"
  (cl:format cl:nil "uint8 mode ~%# 0 -> Off Mode~%# 1 -> Get Lamp Post State Mode~%# 2 -> Get Puck State Mode~%# 3 -> ~%# 4 -> ~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CameraMode>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CameraMode>))
  "Converts a ROS message object to a list"
  (cl:list 'CameraMode
    (cl:cons ':mode (mode msg))
))
