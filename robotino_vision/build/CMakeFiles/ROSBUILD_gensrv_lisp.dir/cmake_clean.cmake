FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/robotino_vision/msg"
  "../src/robotino_vision/srv"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_gensrv_lisp"
  "../srv_gen/lisp/GetPucksPolarCoordinates.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_GetPucksPolarCoordinates.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
