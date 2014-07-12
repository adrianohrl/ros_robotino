
(cl:in-package :asdf)

(defsystem "robotino_vision-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :robotino_vision-msg
)
  :components ((:file "_package")
    (:file "GetPucksPolarCoordinates" :depends-on ("_package_GetPucksPolarCoordinates"))
    (:file "_package_GetPucksPolarCoordinates" :depends-on ("_package"))
  ))