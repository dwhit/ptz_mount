FILE(REMOVE_RECURSE
  "../srv_gen"
  "../src/cv_image_source/srv"
  "CMakeFiles/ROSBUILD_gensrv_py"
  "../src/cv_image_source/srv/__init__.py"
  "../src/cv_image_source/srv/_EndOfStream.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
