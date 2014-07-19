; Auto-generated. Do not edit!


(cl:in-package robotino_refbox-msg)


;//! \htmlinclude Exploration_Info.msg.html

(cl:defclass <Exploration_Info> (roslisp-msg-protocol:ros-message)
  ((machines
    :reader machines
    :initarg :machines
    :type (cl:vector cl:string)
   :initform (cl:make-array 12 :element-type 'cl:string :initial-element ""))
   (red
    :reader red
    :initarg :red
    :type (cl:vector cl:integer)
   :initform (cl:make-array 5 :element-type 'cl:integer :initial-element 0))
   (yellow
    :reader yellow
    :initarg :yellow
    :type (cl:vector cl:integer)
   :initform (cl:make-array 5 :element-type 'cl:integer :initial-element 0))
   (green
    :reader green
    :initarg :green
    :type (cl:vector cl:integer)
   :initform (cl:make-array 5 :element-type 'cl:integer :initial-element 0)))
)

(cl:defclass Exploration_Info (<Exploration_Info>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Exploration_Info>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Exploration_Info)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_refbox-msg:<Exploration_Info> is deprecated: use robotino_refbox-msg:Exploration_Info instead.")))

(cl:ensure-generic-function 'machines-val :lambda-list '(m))
(cl:defmethod machines-val ((m <Exploration_Info>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-msg:machines-val is deprecated.  Use robotino_refbox-msg:machines instead.")
  (machines m))

(cl:ensure-generic-function 'red-val :lambda-list '(m))
(cl:defmethod red-val ((m <Exploration_Info>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-msg:red-val is deprecated.  Use robotino_refbox-msg:red instead.")
  (red m))

(cl:ensure-generic-function 'yellow-val :lambda-list '(m))
(cl:defmethod yellow-val ((m <Exploration_Info>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-msg:yellow-val is deprecated.  Use robotino_refbox-msg:yellow instead.")
  (yellow m))

(cl:ensure-generic-function 'green-val :lambda-list '(m))
(cl:defmethod green-val ((m <Exploration_Info>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-msg:green-val is deprecated.  Use robotino_refbox-msg:green instead.")
  (green m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Exploration_Info>) ostream)
  "Serializes a message object of type '<Exploration_Info>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((__ros_str_len (cl:length ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) ele))
   (cl:slot-value msg 'machines))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    ))
   (cl:slot-value msg 'red))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    ))
   (cl:slot-value msg 'yellow))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let* ((signed ele) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    ))
   (cl:slot-value msg 'green))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Exploration_Info>) istream)
  "Deserializes a message object of type '<Exploration_Info>"
  (cl:setf (cl:slot-value msg 'machines) (cl:make-array 12))
  (cl:let ((vals (cl:slot-value msg 'machines)))
    (cl:dotimes (i 12)
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:aref vals i) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))))
  (cl:setf (cl:slot-value msg 'red) (cl:make-array 5))
  (cl:let ((vals (cl:slot-value msg 'red)))
    (cl:dotimes (i 5)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))))
  (cl:setf (cl:slot-value msg 'yellow) (cl:make-array 5))
  (cl:let ((vals (cl:slot-value msg 'yellow)))
    (cl:dotimes (i 5)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))))
  (cl:setf (cl:slot-value msg 'green) (cl:make-array 5))
  (cl:let ((vals (cl:slot-value msg 'green)))
    (cl:dotimes (i 5)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:aref vals i) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Exploration_Info>)))
  "Returns string type for a message object of type '<Exploration_Info>"
  "robotino_refbox/Exploration_Info")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Exploration_Info)))
  "Returns string type for a message object of type 'Exploration_Info"
  "robotino_refbox/Exploration_Info")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Exploration_Info>)))
  "Returns md5sum for a message object of type '<Exploration_Info>"
  "ede2b576660999fcdb786dbea7cbcbc9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Exploration_Info)))
  "Returns md5sum for a message object of type 'Exploration_Info"
  "ede2b576660999fcdb786dbea7cbcbc9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Exploration_Info>)))
  "Returns full string definition for message of type '<Exploration_Info>"
  (cl:format cl:nil "string[12] machines~%int32[5] red~%int32[5] yellow~%int32[5] green~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Exploration_Info)))
  "Returns full string definition for message of type 'Exploration_Info"
  (cl:format cl:nil "string[12] machines~%int32[5] red~%int32[5] yellow~%int32[5] green~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Exploration_Info>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'machines) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4 (cl:length ele))))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'red) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'yellow) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'green) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Exploration_Info>))
  "Converts a ROS message object to a list"
  (cl:list 'Exploration_Info
    (cl:cons ':machines (machines msg))
    (cl:cons ':red (red msg))
    (cl:cons ':yellow (yellow msg))
    (cl:cons ':green (green msg))
))
