FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/rost_common/msg"
  "../src/rost_common/srv"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "../msg_gen/cpp/include/rost_common/LocalSurprise.h"
  "../msg_gen/cpp/include/rost_common/LocalSurprise1D.h"
  "../msg_gen/cpp/include/rost_common/Perplexity.h"
  "../msg_gen/cpp/include/rost_common/Summary.h"
  "../msg_gen/cpp/include/rost_common/SummaryObservations.h"
  "../msg_gen/cpp/include/rost_common/TopicModel.h"
  "../msg_gen/cpp/include/rost_common/TopicWeights.h"
  "../msg_gen/cpp/include/rost_common/WordObservation.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
