; Auto-generated. Do not edit!


(cl:in-package robotino_movements-srv)


;//! \htmlinclude Prova-request.msg.html

(cl:defclass <Prova-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass Prova-request (<Prova-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Prova-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Prova-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_movements-srv:<Prova-request> is deprecated: use robotino_movements-srv:Prova-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Prova-request>) ostream)
  "Serializes a message object of type '<Prova-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Prova-request>) istream)
  "Deserializes a message object of type '<Prova-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Prova-request>)))
  "Returns string type for a service object of type '<Prova-request>"
  "robotino_movements/ProvaRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Prova-request)))
  "Returns string type for a service object of type 'Prova-request"
  "robotino_movements/ProvaRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Prova-request>)))
  "Returns md5sum for a message object of type '<Prova-request>"
  "e3694f9e06d87bcd1eac27665df8fca4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Prova-request)))
  "Returns md5sum for a message object of type 'Prova-request"
  "e3694f9e06d87bcd1eac27665df8fca4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Prova-request>)))
  "Returns full string definition for message of type '<Prova-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Prova-request)))
  "Returns full string definition for message of type 'Prova-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Prova-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Prova-request>))
  "Converts a ROS message object to a list"
  (cl:list 'Prova-request
))
;//! \htmlinclude Prova-response.msg.html

(cl:defclass <Prova-response> (roslisp-msg-protocol:ros-message)
  ((isDone
    :reader isDone
    :initarg :isDone
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass Prova-response (<Prova-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Prova-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Prova-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_movements-srv:<Prova-response> is deprecated: use robotino_movements-srv:Prova-response instead.")))

(cl:ensure-generic-function 'isDone-val :lambda-list '(m))
(cl:defmethod isDone-val ((m <Prova-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_movements-srv:isDone-val is deprecated.  Use robotino_movements-srv:isDone instead.")
  (isDone m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Prova-response>) ostream)
  "Serializes a message object of type '<Prova-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'isDone) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Prova-response>) istream)
  "Deserializes a message object of type '<Prova-response>"
    (cl:setf (cl:slot-value msg 'isDone) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Prova-response>)))
  "Returns string type for a service object of type '<Prova-response>"
  "robotino_movements/ProvaResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Prova-response)))
  "Returns string type for a service object of type 'Prova-response"
  "robotino_movements/ProvaResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Prova-response>)))
  "Returns md5sum for a message object of type '<Prova-response>"
  "e3694f9e06d87bcd1eac27665df8fca4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Prova-response)))
  "Returns md5sum for a message object of type 'Prova-response"
  "e3694f9e06d87bcd1eac27665df8fca4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Prova-response>)))
  "Returns full string definition for message of type '<Prova-response>"
  (cl:format cl:nil "bool isDone~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Prova-response)))
  "Returns full string definition for message of type 'Prova-response"
  (cl:format cl:nil "bool isDone~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Prova-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Prova-response>))
  "Converts a ROS message object to a list"
  (cl:list 'Prova-response
    (cl:cons ':isDone (isDone msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'Prova)))
  'Prova-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'Prova)))
  'Prova-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Prova)))
  "Returns string type for a service object of type '<Prova>"
  "robotino_movements/Prova")