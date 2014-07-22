FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/robotino_movements/msg"
  "../src/robotino_movements/srv"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/robotino_movements/msg/__init__.py"
  "../src/robotino_movements/msg/_RobotPos.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
