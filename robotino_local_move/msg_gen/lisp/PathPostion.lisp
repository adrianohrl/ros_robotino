; Auto-generated. Do not edit!


(cl:in-package robotino_local_move-msg)


;//! \htmlinclude PathPostion.msg.html

(cl:defclass <PathPostion> (roslisp-msg-protocol:ros-message)
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
   (rotate
    :reader rotate
    :initarg :rotate
    :type cl:float
    :initform 0.0))
)

(cl:defclass PathPostion (<PathPostion>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PathPostion>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PathPostion)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_local_move-msg:<PathPostion> is deprecated: use robotino_local_move-msg:PathPostion instead.")))

(cl:ensure-generic-function 'move_x-val :lambda-list '(m))
(cl:defmethod move_x-val ((m <PathPostion>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_local_move-msg:move_x-val is deprecated.  Use robotino_local_move-msg:move_x instead.")
  (move_x m))

(cl:ensure-generic-function 'move_y-val :lambda-list '(m))
(cl:defmethod move_y-val ((m <PathPostion>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_local_move-msg:move_y-val is deprecated.  Use robotino_local_move-msg:move_y instead.")
  (move_y m))

(cl:ensure-generic-function 'rotate-val :lambda-list '(m))
(cl:defmethod rotate-val ((m <PathPostion>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_local_move-msg:rotate-val is deprecated.  Use robotino_local_move-msg:rotate instead.")
  (rotate m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PathPostion>) ostream)
  "Serializes a message object of type '<PathPostion>"
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
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'rotate))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PathPostion>) istream)
  "Deserializes a message object of type '<PathPostion>"
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
    (cl:setf (cl:slot-value msg 'rotate) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PathPostion>)))
  "Returns string type for a message object of type '<PathPostion>"
  "robotino_local_move/PathPostion")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PathPostion)))
  "Returns string type for a message object of type 'PathPostion"
  "robotino_local_move/PathPostion")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PathPostion>)))
  "Returns md5sum for a message object of type '<PathPostion>"
  "9ccf983396917dbaf59ddb09bb98d827")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PathPostion)))
  "Returns md5sum for a message object of type 'PathPostion"
  "9ccf983396917dbaf59ddb09bb98d827")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PathPostion>)))
  "Returns full string definition for message of type '<PathPostion>"
  (cl:format cl:nil "float32 move_x		# in meters~%float32 move_y		# in meters~%float32 rotate		# in degrees~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PathPostion)))
  "Returns full string definition for message of type 'PathPostion"
  (cl:format cl:nil "float32 move_x		# in meters~%float32 move_y		# in meters~%float32 rotate		# in degrees~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PathPostion>))
  (cl:+ 0
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PathPostion>))
  "Converts a ROS message object to a list"
  (cl:list 'PathPostion
    (cl:cons ':move_x (move_x msg))
    (cl:cons ':move_y (move_y msg))
    (cl:cons ':rotate (rotate msg))
))
