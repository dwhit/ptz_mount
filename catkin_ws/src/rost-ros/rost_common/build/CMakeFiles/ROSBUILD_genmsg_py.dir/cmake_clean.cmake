FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/rost_common/msg"
  "../src/rost_common/srv"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/rost_common/msg/__init__.py"
  "../src/rost_common/msg/_LocalSurprise.py"
  "../src/rost_common/msg/_LocalSurprise1D.py"
  "../src/rost_common/msg/_Perplexity.py"
  "../src/rost_common/msg/_Summary.py"
  "../src/rost_common/msg/_SummaryObservations.py"
  "../src/rost_common/msg/_TopicModel.py"
  "../src/rost_common/msg/_TopicWeights.py"
  "../src/rost_common/msg/_WordObservation.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
