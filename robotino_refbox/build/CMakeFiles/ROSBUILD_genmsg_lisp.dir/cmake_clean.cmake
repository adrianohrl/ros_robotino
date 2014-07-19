FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/robotino_refbox/msg"
  "../src/robotino_refbox/srv"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_genmsg_lisp"
  "../msg_gen/lisp/Exploration_Info.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_Exploration_Info.lisp"
  "../msg_gen/lisp/Order_Info.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_Order_Info.lisp"
  "../msg_gen/lisp/Reported_Machines.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_Reported_Machines.lisp"
  "../msg_gen/lisp/Machine_Types.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_Machine_Types.lisp"
  "../msg_gen/lisp/RobotPos.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_RobotPos.lisp"
  "../msg_gen/lisp/Game_Info.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_Game_Info.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
