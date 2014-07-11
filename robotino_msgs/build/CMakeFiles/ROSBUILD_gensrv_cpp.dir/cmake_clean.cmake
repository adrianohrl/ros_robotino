FILE(REMOVE_RECURSE
  "../src/robotino_msgs/msg"
  "../src/robotino_msgs/srv"
  "../msg_gen"
  "../srv_gen"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_gensrv_cpp"
  "../srv_gen/cpp/include/robotino_msgs/ResetOdometry.h"
  "../srv_gen/cpp/include/robotino_msgs/SetEncoderPosition.h"
  "../srv_gen/cpp/include/robotino_msgs/SetGripperState.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
