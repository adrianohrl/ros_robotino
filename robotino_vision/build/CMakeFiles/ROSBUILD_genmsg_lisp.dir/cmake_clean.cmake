FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/robotino_vision/msg"
  "../src/robotino_vision/srv"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_genmsg_lisp"
  "../msg_gen/lisp/LampPost.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_LampPost.lisp"
  "../msg_gen/lisp/Lamp.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_Lamp.lisp"
  "../msg_gen/lisp/Puck.lisp"
  "../msg_gen/lisp/_package.lisp"
  "../msg_gen/lisp/_package_Puck.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
