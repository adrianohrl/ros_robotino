
(cl:in-package :asdf)

(defsystem "robotino_vision-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "LampPostState" :depends-on ("_package_LampPostState"))
    (:file "_package_LampPostState" :depends-on ("_package"))
    (:file "CameraMode" :depends-on ("_package_CameraMode"))
    (:file "_package_CameraMode" :depends-on ("_package"))
    (:file "PuckState" :depends-on ("_package_PuckState"))
    (:file "_package_PuckState" :depends-on ("_package"))
    (:file "LampState" :depends-on ("_package_LampState"))
    (:file "_package_LampState" :depends-on ("_package"))
  ))