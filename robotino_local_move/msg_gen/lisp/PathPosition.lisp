; Auto-generated. Do not edit!


(cl:in-package robotino_local_move-msg)


;//! \htmlinclude PathPosition.msg.html

(cl:defclass <PathPosition> (roslisp-msg-protocol:ros-message)
  ((move_x
    :reader move_x
    :initarg :move_x
    :type cl:float
    :initform 0.0)
   (move_y
    :reader move_y
    :initarg :move_y
    :type cl:float
    :initform 0.0)
   (rotation
    :reader rotation
    :initarg :rotation
    :type cl:float
    :initform 0.0))
)

(cl:defclass PathPosition (<PathPosition>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PathPosition>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PathPosition)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_local_move-msg:<PathPosition> is deprecated: use robotino_local_move-msg:PathPosition instead.")))

(cl:ensure-generic-function 'move_x-val :lambda-list '(m))
(cl:defmethod move_x-val ((m <PathPosition>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_local_move-msg:move_x-val is deprecated.  Use robotino_local_move-msg:move_x instead.")
  (move_x m))

(cl:ensure-generic-function 'move_y-val :lambda-list '(m))
(cl:defmethod move_y-val ((m <PathPosition>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_local_move-msg:move_y-val is deprecated.  Use robotino_local_move-msg:move_y instead.")
  (move_y m))

(cl:ensure-generic-function 'rotation-val :lambda-list '(m))
(cl:defmethod rotation-val ((m <PathPosition>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_local_move-msg:rotation-val is deprecated.  Use robotino_local_move-msg:rotation instead.")
  (rotation m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PathPosition>) ostream)
  "Serializes a message object of type '<PathPosition>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'move_x))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'move_y))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'rotation))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PathPosition>) istream)
  "Deserializes a message object of type '<PathPosition>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'move_x) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'move_y) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'rotation) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PathPosition>)))
  "Returns string type for a message object of type '<PathPosition>"
  "robotino_local_move/PathPosition")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PathPosition)))
  "Returns string type for a message object of type 'PathPosition"
  "robotino_local_move/PathPosition")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PathPosition>)))
  "Returns md5sum for a message object of type '<PathPosition>"
  "e02b87683e6f02d9aeb7087a7c0e1d54")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PathPosition)))
  "Returns md5sum for a message object of type 'PathPosition"
  "e02b87683e6f02d9aeb7087a7c0e1d54")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PathPosition>)))
  "Returns full string definition for message of type '<PathPosition>"
  (cl:format cl:nil "float32 move_x		# in meters~%float32 move_y		# in meters~%float32 rotation	# in degrees~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PathPosition)))
  "Returns full string definition for message of type 'PathPosition"
  (cl:format cl:nil "float32 move_x		# in meters~%float32 move_y		# in meters~%float32 rotation	# in degrees~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PathPosition>))
  (cl:+ 0
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PathPosition>))
  "Converts a ROS message object to a list"
  (cl:list 'PathPosition
    (cl:cons ':move_x (move_x msg))
    (cl:cons ':move_y (move_y msg))
    (cl:cons ':rotation (rotation msg))
))
