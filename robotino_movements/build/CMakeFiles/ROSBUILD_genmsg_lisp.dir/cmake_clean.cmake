FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/robotino_movements/msg"
  "../src/robotino_movements/srv"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_genmsg_lisp"
  "../msg_gen/lisp/RobotPos.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_RobotPos.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
