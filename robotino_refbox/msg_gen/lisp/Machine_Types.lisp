; Auto-generated. Do not edit!


(cl:in-package robotino_refbox-msg)


;//! \htmlinclude Machine_Types.msg.html

(cl:defclass <Machine_Types> (roslisp-msg-protocol:ros-message)
  ((machines
    :reader machines
    :initarg :machines
    :type (cl:vector cl:string)
   :initform (cl:make-array 12 :element-type 'cl:string :initial-element ""))
   (types
    :reader types
    :initarg :types
    :type (cl:vector cl:string)
   :initform (cl:make-array 12 :element-type 'cl:string :initial-element "")))
)

(cl:defclass Machine_Types (<Machine_Types>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Machine_Types>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Machine_Types)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_refbox-msg:<Machine_Types> is deprecated: use robotino_refbox-msg:Machine_Types instead.")))

(cl:ensure-generic-function 'machines-val :lambda-list '(m))
(cl:defmethod machines-val ((m <Machine_Types>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-msg:machines-val is deprecated.  Use robotino_refbox-msg:machines instead.")
  (machines m))

(cl:ensure-generic-function 'types-val :lambda-list '(m))
(cl:defmethod types-val ((m <Machine_Types>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-msg:types-val is deprecated.  Use robotino_refbox-msg:types instead.")
  (types m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Machine_Types>) ostream)
  "Serializes a message object of type '<Machine_Types>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((__ros_str_len (cl:length ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) ele))
   (cl:slot-value msg 'machines))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((__ros_str_len (cl:length ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) ele))
   (cl:slot-value msg 'types))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Machine_Types>) istream)
  "Deserializes a message object of type '<Machine_Types>"
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
  (cl:setf (cl:slot-value msg 'types) (cl:make-array 12))
  (cl:let ((vals (cl:slot-value msg 'types)))
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Machine_Types>)))
  "Returns string type for a message object of type '<Machine_Types>"
  "robotino_refbox/Machine_Types")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Machine_Types)))
  "Returns string type for a message object of type 'Machine_Types"
  "robotino_refbox/Machine_Types")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Machine_Types>)))
  "Returns md5sum for a message object of type '<Machine_Types>"
  "256353ef7b866c5b748c7d6096e8f9b8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Machine_Types)))
  "Returns md5sum for a message object of type 'Machine_Types"
  "256353ef7b866c5b748c7d6096e8f9b8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Machine_Types>)))
  "Returns full string definition for message of type '<Machine_Types>"
  (cl:format cl:nil "string[12] machines~%string[12] types~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Machine_Types)))
  "Returns full string definition for message of type 'Machine_Types"
  (cl:format cl:nil "string[12] machines~%string[12] types~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Machine_Types>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'machines) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4 (cl:length ele))))
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'types) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4 (cl:length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Machine_Types>))
  "Converts a ROS message object to a list"
  (cl:list 'Machine_Types
    (cl:cons ':machines (machines msg))
    (cl:cons ':types (types msg))
))
