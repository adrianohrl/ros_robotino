; Auto-generated. Do not edit!


(cl:in-package robotino_vision-msg)


;//! \htmlinclude LampPostState.msg.html

(cl:defclass <LampPostState> (roslisp-msg-protocol:ros-message)
  ((lamps
    :reader lamps
    :initarg :lamps
    :type (cl:vector robotino_vision-msg:LampState)
   :initform (cl:make-array 3 :element-type 'robotino_vision-msg:LampState :initial-element (cl:make-instance 'robotino_vision-msg:LampState)))
   (at
    :reader at
    :initarg :at
    :type cl:real
    :initform 0))
)

(cl:defclass LampPostState (<LampPostState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LampPostState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LampPostState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name robotino_vision-msg:<LampPostState> is deprecated: use robotino_vision-msg:LampPostState instead.")))

(cl:ensure-generic-function 'lamps-val :lambda-list '(m))
(cl:defmethod lamps-val ((m <LampPostState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:lamps-val is deprecated.  Use robotino_vision-msg:lamps instead.")
  (lamps m))

(cl:ensure-generic-function 'at-val :lambda-list '(m))
(cl:defmethod at-val ((m <LampPostState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader robotino_vision-msg:at-val is deprecated.  Use robotino_vision-msg:at instead.")
  (at m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LampPostState>) ostream)
  "Serializes a message object of type '<LampPostState>"
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'lamps))
  (cl:let ((__sec (cl:floor (cl:slot-value msg 'at)))
        (__nsec (cl:round (cl:* 1e9 (cl:- (cl:slot-value msg 'at) (cl:floor (cl:slot-value msg 'at)))))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __sec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 0) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __nsec) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __nsec) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LampPostState>) istream)
  "Deserializes a message object of type '<LampPostState>"
  (cl:setf (cl:slot-value msg 'lamps) (cl:make-array 3))
  (cl:let ((vals (cl:slot-value msg 'lamps)))
    (cl:dotimes (i 3)
    (cl:setf (cl:aref vals i) (cl:make-instance 'robotino_vision-msg:LampState))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream)))
    (cl:let ((__sec 0) (__nsec 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __sec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 0) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __nsec) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __nsec) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'at) (cl:+ (cl:coerce __sec 'cl:double-float) (cl:/ __nsec 1e9))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LampPostState>)))
  "Returns string type for a message object of type '<LampPostState>"
  "robotino_vision/LampPostState")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LampPostState)))
  "Returns string type for a message object of type 'LampPostState"
  "robotino_vision/LampPostState")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LampPostState>)))
  "Returns md5sum for a message object of type '<LampPostState>"
  "2f189c67d3ae6b969ff078f328060705")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LampPostState)))
  "Returns md5sum for a message object of type 'LampPostState"
  "2f189c67d3ae6b969ff078f328060705")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LampPostState>)))
  "Returns full string definition for message of type '<LampPostState>"
  (cl:format cl:nil "robotino_vision/LampState[3] lamps		# A fixed-length vector of lamps~%time at					# Time at which this had been stimated~%~%================================================================================~%MSG: robotino_vision/LampState~%string color		# lamp color~%bool isLighting		# true if this lamp is lighting and false if this lamp is not.~%time at			# Time at which this had been stimated~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LampPostState)))
  "Returns full string definition for message of type 'LampPostState"
  (cl:format cl:nil "robotino_vision/LampState[3] lamps		# A fixed-length vector of lamps~%time at					# Time at which this had been stimated~%~%================================================================================~%MSG: robotino_vision/LampState~%string color		# lamp color~%bool isLighting		# true if this lamp is lighting and false if this lamp is not.~%time at			# Time at which this had been stimated~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LampPostState>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'lamps) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LampPostState>))
  "Converts a ROS message object to a list"
  (cl:list 'LampPostState
    (cl:cons ':lamps (lamps msg))
    (cl:cons ':at (at msg))
))
