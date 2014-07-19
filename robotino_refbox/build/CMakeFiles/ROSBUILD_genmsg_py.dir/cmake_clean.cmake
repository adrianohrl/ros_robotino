FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/robotino_refbox/msg"
  "../src/robotino_refbox/srv"
  "../msg_gen"
  "../srv_gen"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/robotino_refbox/msg/__init__.py"
  "../src/robotino_refbox/msg/_Exploration_Info.py"
  "../src/robotino_refbox/msg/_Order_Info.py"
  "../src/robotino_refbox/msg/_Reported_Machines.py"
  "../src/robotino_refbox/msg/_Machine_Types.py"
  "../src/robotino_refbox/msg/_RobotPos.py"
  "../src/robotino_refbox/msg/_Game_Info.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
