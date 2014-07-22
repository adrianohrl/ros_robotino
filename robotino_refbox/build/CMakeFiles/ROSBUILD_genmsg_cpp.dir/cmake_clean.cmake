FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/robotino_refbox/msg"
  "../src/robotino_refbox/srv"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "../msg_gen/cpp/include/robotino_refbox/Exploration_Info.h"
  "../msg_gen/cpp/include/robotino_refbox/Order_Info.h"
  "../msg_gen/cpp/include/robotino_refbox/Reported_Machines.h"
  "../msg_gen/cpp/include/robotino_refbox/RobotPos.h"
  "../msg_gen/cpp/include/robotino_refbox/Game_Info.h"
  "../msg_gen/cpp/include/robotino_refbox/Machine_Types.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
