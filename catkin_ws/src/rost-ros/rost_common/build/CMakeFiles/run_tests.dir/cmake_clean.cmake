FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/rost_common/msg"
  "../src/rost_common/srv"
  "CMakeFiles/run_tests"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/run_tests.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
