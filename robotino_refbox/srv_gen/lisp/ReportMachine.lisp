; Auto-generated. Do not edit!


(cl:in-package robotino_refbox-srv)


;//! \htmlinclude ReportMachine-request.msg.html

(cl:defclass <ReportMachine-request> (roslisp-msg-protocol:ros-message)
  ((machine
    :reader machine
    :initarg :machine
    :type cl:string
    :initform "")
   (type
    :reader type
    :initarg :type
    :type cl:string
    :initform ""))
)

(cl:defclass ReportMachine-request (<ReportMachine-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ReportMachine-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ReportMachine-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_refbox-srv:<ReportMachine-request> is deprecated: use robotino_refbox-srv:ReportMachine-request instead.")))

(cl:ensure-generic-function 'machine-val :lambda-list '(m))
(cl:defmethod machine-val ((m <ReportMachine-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-srv:machine-val is deprecated.  Use robotino_refbox-srv:machine instead.")
  (machine m))

(cl:ensure-generic-function 'type-val :lambda-list '(m))
(cl:defmethod type-val ((m <ReportMachine-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-srv:type-val is deprecated.  Use robotino_refbox-srv:type instead.")
  (type m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ReportMachine-request>) ostream)
  "Serializes a message object of type '<ReportMachine-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'machine))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'machine))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'type))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'type))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ReportMachine-request>) istream)
  "Deserializes a message object of type '<ReportMachine-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'machine) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'machine) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'type) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'type) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ReportMachine-request>)))
  "Returns string type for a service object of type '<ReportMachine-request>"
  "robotino_refbox/ReportMachineRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ReportMachine-request)))
  "Returns string type for a service object of type 'ReportMachine-request"
  "robotino_refbox/ReportMachineRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ReportMachine-request>)))
  "Returns md5sum for a message object of type '<ReportMachine-request>"
  "2aeb18811cba5f13acca76facad92e85")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ReportMachine-request)))
  "Returns md5sum for a message object of type 'ReportMachine-request"
  "2aeb18811cba5f13acca76facad92e85")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ReportMachine-request>)))
  "Returns full string definition for message of type '<ReportMachine-request>"
  (cl:format cl:nil "string machine~%string type~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ReportMachine-request)))
  "Returns full string definition for message of type 'ReportMachine-request"
  (cl:format cl:nil "string machine~%string type~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ReportMachine-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'machine))
     4 (cl:length (cl:slot-value msg 'type))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ReportMachine-request>))
  "Converts a ROS message object to a list"
  (cl:list 'ReportMachine-request
    (cl:cons ':machine (machine msg))
    (cl:cons ':type (type msg))
))
;//! \htmlinclude ReportMachine-response.msg.html

(cl:defclass <ReportMachine-response> (roslisp-msg-protocol:ros-message)
  ((reported
    :reader reported
    :initarg :reported
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass ReportMachine-response (<ReportMachine-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ReportMachine-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ReportMachine-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_refbox-srv:<ReportMachine-response> is deprecated: use robotino_refbox-srv:ReportMachine-response instead.")))

(cl:ensure-generic-function 'reported-val :lambda-list '(m))
(cl:defmethod reported-val ((m <ReportMachine-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_refbox-srv:reported-val is deprecated.  Use robotino_refbox-srv:reported instead.")
  (reported m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ReportMachine-response>) ostream)
  "Serializes a message object of type '<ReportMachine-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'reported) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ReportMachine-response>) istream)
  "Deserializes a message object of type '<ReportMachine-response>"
    (cl:setf (cl:slot-value msg 'reported) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ReportMachine-response>)))
  "Returns string type for a service object of type '<ReportMachine-response>"
  "robotino_refbox/ReportMachineResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ReportMachine-response)))
  "Returns string type for a service object of type 'ReportMachine-response"
  "robotino_refbox/ReportMachineResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ReportMachine-response>)))
  "Returns md5sum for a message object of type '<ReportMachine-response>"
  "2aeb18811cba5f13acca76facad92e85")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ReportMachine-response)))
  "Returns md5sum for a message object of type 'ReportMachine-response"
  "2aeb18811cba5f13acca76facad92e85")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ReportMachine-response>)))
  "Returns full string definition for message of type '<ReportMachine-response>"
  (cl:format cl:nil "bool reported~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ReportMachine-response)))
  "Returns full string definition for message of type 'ReportMachine-response"
  (cl:format cl:nil "bool reported~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ReportMachine-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ReportMachine-response>))
  "Converts a ROS message object to a list"
  (cl:list 'ReportMachine-response
    (cl:cons ':reported (reported msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'ReportMachine)))
  'ReportMachine-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'ReportMachine)))
  'ReportMachine-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ReportMachine)))
  "Returns string type for a service object of type '<ReportMachine>"
  "robotino_refbox/ReportMachine")