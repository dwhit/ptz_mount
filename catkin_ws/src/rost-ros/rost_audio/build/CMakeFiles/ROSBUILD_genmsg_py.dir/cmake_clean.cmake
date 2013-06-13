FILE(REMOVE_RECURSE
  "../msg_gen"
  "../src/rost_audio/msg"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/rost_audio/msg/__init__.py"
  "../src/rost_audio/msg/_AudioRaw.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
