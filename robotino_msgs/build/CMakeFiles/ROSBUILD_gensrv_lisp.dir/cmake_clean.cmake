FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/robotino_msgs/msg"
  "../src/robotino_msgs/srv"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_gensrv_lisp"
  "../srv_gen/lisp/SetEncoderPosition.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_SetEncoderPosition.lisp"
  "../srv_gen/lisp/ResetOdometry.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_ResetOdometry.lisp"
  "../srv_gen/lisp/SetGripperState.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_SetGripperState.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
