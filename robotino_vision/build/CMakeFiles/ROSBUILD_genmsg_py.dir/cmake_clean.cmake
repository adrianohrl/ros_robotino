FILE(REMOVE_RECURSE
  "../msg_gen"
  "../src/robotino_vision/msg"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/robotino_vision/msg/__init__.py"
  "../src/robotino_vision/msg/_LampState.py"
  "../src/robotino_vision/msg/_PuckState.py"
  "../src/robotino_vision/msg/_LampPostState.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
