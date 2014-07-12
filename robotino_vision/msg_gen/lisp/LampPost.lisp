; Auto-generated. Do not edit!


(cl:in-package robotino_vision-msg)


;//! \htmlinclude LampPost.msg.html

(cl:defclass <LampPost> (roslisp-msg-protocol:ros-message)
  ((lamps
    :reader lamps
    :initarg :lamps
    :type (cl:vector robotino_vision-msg:Lamp)
   :initform (cl:make-array 3 :element-type 'robotino_vision-msg:Lamp :initial-element (cl:make-instance 'robotino_vision-msg:Lamp))))
)

(cl:defclass LampPost (<LampPost>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LampPost>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LampPost)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_vision-msg:<LampPost> is deprecated: use robotino_vision-msg:LampPost instead.")))

(cl:ensure-generic-function 'lamps-val :lambda-list '(m))
(cl:defmethod lamps-val ((m <LampPost>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:lamps-val is deprecated.  Use robotino_vision-msg:lamps instead.")
  (lamps m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LampPost>) ostream)
  "Serializes a message object of type '<LampPost>"
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'lamps))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LampPost>) istream)
  "Deserializes a message object of type '<LampPost>"
  (cl:setf (cl:slot-value msg 'lamps) (cl:make-array 3))
  (cl:let ((vals (cl:slot-value msg 'lamps)))
    (cl:dotimes (i 3)
    (cl:setf (cl:aref vals i) (cl:make-instance 'robotino_vision-msg:Lamp))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LampPost>)))
  "Returns string type for a message object of type '<LampPost>"
  "robotino_vision/LampPost")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LampPost)))
  "Returns string type for a message object of type 'LampPost"
  "robotino_vision/LampPost")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LampPost>)))
  "Returns md5sum for a message object of type '<LampPost>"
  "0f1f7a8dfa3cde155d77d2d64cddf185")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LampPost)))
  "Returns md5sum for a message object of type 'LampPost"
  "0f1f7a8dfa3cde155d77d2d64cddf185")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LampPost>)))
  "Returns full string definition for message of type '<LampPost>"
  (cl:format cl:nil "robotino_vision/Lamp[3] lamps		# A fixed-length vector of lamps~%~%================================================================================~%MSG: robotino_vision/Lamp~%string color		# lamp color~%bool isLighting		# true if this lamp is lighting and false if this lamp is not.~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LampPost)))
  "Returns full string definition for message of type 'LampPost"
  (cl:format cl:nil "robotino_vision/Lamp[3] lamps		# A fixed-length vector of lamps~%~%================================================================================~%MSG: robotino_vision/Lamp~%string color		# lamp color~%bool isLighting		# true if this lamp is lighting and false if this lamp is not.~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LampPost>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'lamps) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LampPost>))
  "Converts a ROS message object to a list"
  (cl:list 'LampPost
    (cl:cons ':lamps (lamps msg))
))
