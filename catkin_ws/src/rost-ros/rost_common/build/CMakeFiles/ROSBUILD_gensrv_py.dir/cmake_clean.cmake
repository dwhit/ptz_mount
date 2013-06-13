FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/rost_common/msg"
  "../src/rost_common/srv"
  "CMakeFiles/ROSBUILD_gensrv_py"
  "../src/rost_common/srv/__init__.py"
  "../src/rost_common/srv/_GetImage.py"
  "../src/rost_common/srv/_GetModelPerplexity.py"
  "../src/rost_common/srv/_GetTopicModel.py"
  "../src/rost_common/srv/_GetTopicsForTime.py"
  "../src/rost_common/srv/_LoadFile.py"
  "../src/rost_common/srv/_Pause.py"
  "../src/rost_common/srv/_RefineTopics.py"
  "../src/rost_common/srv/_SaveFile.py"
  "../src/rost_common/srv/_SaveObservationModel.py"
  "../src/rost_common/srv/_SetTopicModel.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
