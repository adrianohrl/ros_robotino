FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/robotino_movements/msg"
  "../src/robotino_movements/srv"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_gensrv_lisp"
  "../srv_gen/lisp/FullPath.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_FullPath.lisp"
  "../srv_gen/lisp/Prova.lisp"
  "../srv_gen/lisp/_package.lisp"
  "../srv_gen/lisp/_package_Prova.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
