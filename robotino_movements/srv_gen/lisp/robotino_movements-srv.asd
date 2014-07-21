
(cl:in-package :asdf)

(defsystem "robotino_movements-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "FullPath" :depends-on ("_package_FullPath"))
    (:file "_package_FullPath" :depends-on ("_package"))
  ))