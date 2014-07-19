; Auto-generated. Do not edit!


(cl:in-package robotino_refbox-msg)


;//! \htmlinclude Game_Info.msg.html

(cl:defclass <Game_Info> (roslisp-msg-protocol:ros-message)
  ((phase
    :reader phase
    :initarg :phase
    :type cl:integer
    :initform 0)
   (state
    :reader state
    :initarg :state
    :type cl:integer
    :initform 0)
   (time
    :reader time
    :initarg :time
    :type (cl:vector cl:integer)
   :initform (cl:make-array 3 :element-type 'cl:integer :initial-element 0)))
)

(cl:defclass Game_Info (<Game_Info>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Game_Info>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Game_Info)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_refbox-msg:<Game_Info> is deprecated: use robotino_refbox-msg:Game_Info instead.")))

(cl:ensure-generic-function 'phase-val :lambda-list '(m))
(cl:defmethod phase-val ((m <Game_Info>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-msg:phase-val is deprecated.  Use robotino_refbox-msg:phase instead.")
  (phase m))

(cl:ensure-generic-function 'state-val :lambda-list '(m))
(cl:defmethod state-val ((m <Game_Info>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-msg:state-val is deprecated.  Use robotino_refbox-msg:state instead.")
  (state m))

(cl:ensure-generic-function 'time-val :lambda-list '(m))
(cl:defmethod time-val ((m <Game_Info>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-msg:time-val is deprecated.  Use robotino_refbox-msg:time instead.")
  (time m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Game_Info>) ostream)
  "Serializes a message object of type '<Game_Info>"
  (cl:let* ((signed (cl:slot-value msg 'phase)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'state)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 18446744073709551616) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) unsigned) ostream)
    ))
   (cl:slot-value msg 'time))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Game_Info>) istream)
  "Deserializes a message object of type '<Game_Info>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'phase) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'state) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  (cl:setf (cl:slot-value msg 'time) (cl:make-array 3))
  (cl:let ((vals (cl:slot-value msg 'time)))
    (cl:dotimes (i 3)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 9223372036854775808) unsigned (cl:- unsigned 18446744073709551616))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Game_Info>)))
  "Returns string type for a message object of type '<Game_Info>"
  "robotino_refbox/Game_Info")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Game_Info)))
  "Returns string type for a message object of type 'Game_Info"
  "robotino_refbox/Game_Info")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Game_Info>)))
  "Returns md5sum for a message object of type '<Game_Info>"
  "e6f8fa933c19a2d59891d4e40d40385f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Game_Info)))
  "Returns md5sum for a message object of type 'Game_Info"
  "e6f8fa933c19a2d59891d4e40d40385f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Game_Info>)))
  "Returns full string definition for message of type '<Game_Info>"
  (cl:format cl:nil "int32 phase~%int32 state~%int64[3] time~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Game_Info)))
  "Returns full string definition for message of type 'Game_Info"
  (cl:format cl:nil "int32 phase~%int32 state~%int64[3] time~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Game_Info>))
  (cl:+ 0
     4
     4
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'time) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Game_Info>))
  "Converts a ROS message object to a list"
  (cl:list 'Game_Info
    (cl:cons ':phase (phase msg))
    (cl:cons ':state (state msg))
    (cl:cons ':time (time msg))
))
