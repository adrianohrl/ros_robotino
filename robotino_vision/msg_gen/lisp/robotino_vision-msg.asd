
(cl:in-package :asdf)

(defsystem "robotino_vision-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Puck" :depends-on ("_package_Puck"))
    (:file "_package_Puck" :depends-on ("_package"))
    (:file "LampPost" :depends-on ("_package_LampPost"))
    (:file "_package_LampPost" :depends-on ("_package"))
    (:file "Lamp" :depends-on ("_package_Lamp"))
    (:file "_package_Lamp" :depends-on ("_package"))
  ))