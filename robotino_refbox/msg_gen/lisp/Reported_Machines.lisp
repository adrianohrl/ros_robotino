; Auto-generated. Do not edit!


(cl:in-package robotino_refbox-msg)


;//! \htmlinclude Reported_Machines.msg.html

(cl:defclass <Reported_Machines> (roslisp-msg-protocol:ros-message)
  ((machines
    :reader machines
    :initarg :machines
    :type (cl:vector cl:string)
   :initform (cl:make-array 12 :element-type 'cl:string :initial-element "")))
)

(cl:defclass Reported_Machines (<Reported_Machines>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Reported_Machines>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Reported_Machines)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_refbox-msg:<Reported_Machines> is deprecated: use robotino_refbox-msg:Reported_Machines instead.")))

(cl:ensure-generic-function 'machines-val :lambda-list '(m))
(cl:defmethod machines-val ((m <Reported_Machines>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-msg:machines-val is deprecated.  Use robotino_refbox-msg:machines instead.")
  (machines m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Reported_Machines>) ostream)
  "Serializes a message object of type '<Reported_Machines>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((__ros_str_len (cl:length ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) ele))
   (cl:slot-value msg 'machines))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Reported_Machines>) istream)
  "Deserializes a message object of type '<Reported_Machines>"
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
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Reported_Machines>)))
  "Returns string type for a message object of type '<Reported_Machines>"
  "robotino_refbox/Reported_Machines")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Reported_Machines)))
  "Returns string type for a message object of type 'Reported_Machines"
  "robotino_refbox/Reported_Machines")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Reported_Machines>)))
  "Returns md5sum for a message object of type '<Reported_Machines>"
  "a2e53b92a4c5a291a2239aa1d29e284d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Reported_Machines)))
  "Returns md5sum for a message object of type 'Reported_Machines"
  "a2e53b92a4c5a291a2239aa1d29e284d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Reported_Machines>)))
  "Returns full string definition for message of type '<Reported_Machines>"
  (cl:format cl:nil "string[12] machines~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Reported_Machines)))
  "Returns full string definition for message of type 'Reported_Machines"
  (cl:format cl:nil "string[12] machines~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Reported_Machines>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'machines) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4 (cl:length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Reported_Machines>))
  "Converts a ROS message object to a list"
  (cl:list 'Reported_Machines
    (cl:cons ':machines (machines msg))
))
