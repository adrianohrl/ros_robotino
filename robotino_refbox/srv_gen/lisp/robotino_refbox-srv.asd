
(cl:in-package :asdf)

(defsystem "robotino_refbox-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "ReportMachine" :depends-on ("_package_ReportMachine"))
    (:file "_package_ReportMachine" :depends-on ("_package"))
  ))