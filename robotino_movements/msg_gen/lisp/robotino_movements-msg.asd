
(cl:in-package :asdf)

(defsystem "robotino_movements-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "RobotPos" :depends-on ("_package_RobotPos"))
    (:file "_package_RobotPos" :depends-on ("_package"))
  ))