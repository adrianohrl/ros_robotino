
(cl:in-package :asdf)

(defsystem "robotino_refbox-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Exploration_Info" :depends-on ("_package_Exploration_Info"))
    (:file "_package_Exploration_Info" :depends-on ("_package"))
    (:file "Order_Info" :depends-on ("_package_Order_Info"))
    (:file "_package_Order_Info" :depends-on ("_package"))
    (:file "Reported_Machines" :depends-on ("_package_Reported_Machines"))
    (:file "_package_Reported_Machines" :depends-on ("_package"))
    (:file "RobotPos" :depends-on ("_package_RobotPos"))
    (:file "_package_RobotPos" :depends-on ("_package"))
    (:file "Game_Info" :depends-on ("_package_Game_Info"))
    (:file "_package_Game_Info" :depends-on ("_package"))
    (:file "Machine_Types" :depends-on ("_package_Machine_Types"))
    (:file "_package_Machine_Types" :depends-on ("_package"))
  ))