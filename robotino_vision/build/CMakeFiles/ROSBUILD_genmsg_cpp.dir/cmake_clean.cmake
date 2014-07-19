FILE(REMOVE_RECURSE
  "../msg_gen"
  "../src/robotino_vision/msg"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "../msg_gen/cpp/include/robotino_vision/LampState.h"
  "../msg_gen/cpp/include/robotino_vision/PuckState.h"
  "../msg_gen/cpp/include/robotino_vision/LampPostState.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
