; Auto-generated. Do not edit!


(cl:in-package robotino_vision-srv)


;//! \htmlinclude GetPucksPolarCoordinates-request.msg.html

(cl:defclass <GetPucksPolarCoordinates-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass GetPucksPolarCoordinates-request (<GetPucksPolarCoordinates-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetPucksPolarCoordinates-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetPucksPolarCoordinates-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_vision-srv:<GetPucksPolarCoordinates-request> is deprecated: use robotino_vision-srv:GetPucksPolarCoordinates-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetPucksPolarCoordinates-request>) ostream)
  "Serializes a message object of type '<GetPucksPolarCoordinates-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetPucksPolarCoordinates-request>) istream)
  "Deserializes a message object of type '<GetPucksPolarCoordinates-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetPucksPolarCoordinates-request>)))
  "Returns string type for a service object of type '<GetPucksPolarCoordinates-request>"
  "robotino_vision/GetPucksPolarCoordinatesRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetPucksPolarCoordinates-request)))
  "Returns string type for a service object of type 'GetPucksPolarCoordinates-request"
  "robotino_vision/GetPucksPolarCoordinatesRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetPucksPolarCoordinates-request>)))
  "Returns md5sum for a message object of type '<GetPucksPolarCoordinates-request>"
  "1edf795eab11f29ba3908ae9d027e4af")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetPucksPolarCoordinates-request)))
  "Returns md5sum for a message object of type 'GetPucksPolarCoordinates-request"
  "1edf795eab11f29ba3908ae9d027e4af")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetPucksPolarCoordinates-request>)))
  "Returns full string definition for message of type '<GetPucksPolarCoordinates-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetPucksPolarCoordinates-request)))
  "Returns full string definition for message of type 'GetPucksPolarCoordinates-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetPucksPolarCoordinates-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetPucksPolarCoordinates-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetPucksPolarCoordinates-request
))
;//! \htmlinclude GetPucksPolarCoordinates-response.msg.html

(cl:defclass <GetPucksPolarCoordinates-response> (roslisp-msg-protocol:ros-message)
  ((succeed
    :reader succeed
    :initarg :succeed
    :type cl:boolean
    :initform cl:nil)
   (pucks
    :reader pucks
    :initarg :pucks
    :type (cl:vector robotino_vision-msg:Puck)
   :initform (cl:make-array 0 :element-type 'robotino_vision-msg:Puck :initial-element (cl:make-instance 'robotino_vision-msg:Puck))))
)

(cl:defclass GetPucksPolarCoordinates-response (<GetPucksPolarCoordinates-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetPucksPolarCoordinates-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetPucksPolarCoordinates-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_vision-srv:<GetPucksPolarCoordinates-response> is deprecated: use robotino_vision-srv:GetPucksPolarCoordinates-response instead.")))

(cl:ensure-generic-function 'succeed-val :lambda-list '(m))
(cl:defmethod succeed-val ((m <GetPucksPolarCoordinates-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-srv:succeed-val is deprecated.  Use robotino_vision-srv:succeed instead.")
  (succeed m))

(cl:ensure-generic-function 'pucks-val :lambda-list '(m))
(cl:defmethod pucks-val ((m <GetPucksPolarCoordinates-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-srv:pucks-val is deprecated.  Use robotino_vision-srv:pucks instead.")
  (pucks m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetPucksPolarCoordinates-response>) ostream)
  "Serializes a message object of type '<GetPucksPolarCoordinates-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'succeed) 1 0)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'pucks))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'pucks))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetPucksPolarCoordinates-response>) istream)
  "Deserializes a message object of type '<GetPucksPolarCoordinates-response>"
    (cl:setf (cl:slot-value msg 'succeed) (cl:not (cl:zerop (cl:read-byte istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'pucks) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'pucks)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'robotino_vision-msg:Puck))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetPucksPolarCoordinates-response>)))
  "Returns string type for a service object of type '<GetPucksPolarCoordinates-response>"
  "robotino_vision/GetPucksPolarCoordinatesResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetPucksPolarCoordinates-response)))
  "Returns string type for a service object of type 'GetPucksPolarCoordinates-response"
  "robotino_vision/GetPucksPolarCoordinatesResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetPucksPolarCoordinates-response>)))
  "Returns md5sum for a message object of type '<GetPucksPolarCoordinates-response>"
  "1edf795eab11f29ba3908ae9d027e4af")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetPucksPolarCoordinates-response)))
  "Returns md5sum for a message object of type 'GetPucksPolarCoordinates-response"
  "1edf795eab11f29ba3908ae9d027e4af")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetPucksPolarCoordinates-response>)))
  "Returns full string definition for message of type '<GetPucksPolarCoordinates-response>"
  (cl:format cl:nil "bool succeed~%robotino_vision/Puck[] pucks~%~%~%================================================================================~%MSG: robotino_vision/Puck~%float32 distance			# puck distance in meters~%float32 direction			# puck direction in degrees~%string color=\"orange\"			# puck color~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetPucksPolarCoordinates-response)))
  "Returns full string definition for message of type 'GetPucksPolarCoordinates-response"
  (cl:format cl:nil "bool succeed~%robotino_vision/Puck[] pucks~%~%~%================================================================================~%MSG: robotino_vision/Puck~%float32 distance			# puck distance in meters~%float32 direction			# puck direction in degrees~%string color=\"orange\"			# puck color~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetPucksPolarCoordinates-response>))
  (cl:+ 0
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'pucks) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetPucksPolarCoordinates-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetPucksPolarCoordinates-response
    (cl:cons ':succeed (succeed msg))
    (cl:cons ':pucks (pucks msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetPucksPolarCoordinates)))
  'GetPucksPolarCoordinates-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetPucksPolarCoordinates)))
  'GetPucksPolarCoordinates-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetPucksPolarCoordinates)))
  "Returns string type for a service object of type '<GetPucksPolarCoordinates>"
  "robotino_vision/GetPucksPolarCoordinates")