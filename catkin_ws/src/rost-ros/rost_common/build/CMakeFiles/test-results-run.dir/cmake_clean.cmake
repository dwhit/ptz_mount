FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/rost_common/msg"
  "../src/rost_common/srv"
  "CMakeFiles/test-results-run"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/test-results-run.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
