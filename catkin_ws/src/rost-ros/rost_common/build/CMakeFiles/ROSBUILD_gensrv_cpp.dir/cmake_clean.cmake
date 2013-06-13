FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/rost_common/msg"
  "../src/rost_common/srv"
  "CMakeFiles/ROSBUILD_gensrv_cpp"
  "../srv_gen/cpp/include/rost_common/GetImage.h"
  "../srv_gen/cpp/include/rost_common/GetModelPerplexity.h"
  "../srv_gen/cpp/include/rost_common/GetTopicModel.h"
  "../srv_gen/cpp/include/rost_common/GetTopicsForTime.h"
  "../srv_gen/cpp/include/rost_common/LoadFile.h"
  "../srv_gen/cpp/include/rost_common/Pause.h"
  "../srv_gen/cpp/include/rost_common/RefineTopics.h"
  "../srv_gen/cpp/include/rost_common/SaveFile.h"
  "../srv_gen/cpp/include/rost_common/SaveObservationModel.h"
  "../srv_gen/cpp/include/rost_common/SetTopicModel.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
