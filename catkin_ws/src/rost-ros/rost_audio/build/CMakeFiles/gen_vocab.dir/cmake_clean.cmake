FILE(REMOVE_RECURSE
  "../msg_gen"
  "../src/rost_audio/msg"
  "CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o"
  "../bin/gen_vocab.pdb"
  "../bin/gen_vocab"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang CXX)
  INCLUDE(CMakeFiles/gen_vocab.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
