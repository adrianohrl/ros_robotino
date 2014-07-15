FILE(REMOVE_RECURSE
  "../src/robotino_vision/msg"
  "../src/robotino_vision/srv"
  "../msg_gen"
  "../srv_gen"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/robotino_vision/msg/__init__.py"
  "../src/robotino_vision/msg/_Puck.py"
  "../src/robotino_vision/msg/_LampPost.py"
  "../src/robotino_vision/msg/_Lamp.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
