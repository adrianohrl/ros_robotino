FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/robotino_vision/msg"
  "../src/robotino_vision/srv"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_genmsg_lisp"
  "../msg_gen/lisp/LampPostState.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_LampPostState.lisp"
  "../msg_gen/lisp/LampState.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_LampState.lisp"
  "../msg_gen/lisp/PuckState.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_PuckState.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
