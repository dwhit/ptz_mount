# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/build

# Include any dependencies generated for this target.
include CMakeFiles/gen_vocab.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gen_vocab.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gen_vocab.dir/flags.make

CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: CMakeFiles/gen_vocab.dir/flags.make
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: ../src/gen_vocab.cpp
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: ../manifest.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/cpp_common/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/rostime/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/roscpp_traits/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/roscpp_serialization/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/genmsg/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/genpy/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/message_runtime/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/rosconsole/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/std_msgs/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/rosgraph_msgs/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/xmlrpcpp/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/roscpp/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/geometry_msgs/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/sensor_msgs/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_common/manifest.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/catkin/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/opencv2/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /opt/ros/groovy/share/cv_bridge/package.xml
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_common/msg_gen/generated
CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o: /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_common/srv_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o -c /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/src/gen_vocab.cpp

CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/src/gen_vocab.cpp > CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.i

CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/src/gen_vocab.cpp -o CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.s

CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o.requires:
.PHONY : CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o.requires

CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o.provides: CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o.requires
	$(MAKE) -f CMakeFiles/gen_vocab.dir/build.make CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o.provides.build
.PHONY : CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o.provides

CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o.provides.build: CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o

# Object files for target gen_vocab
gen_vocab_OBJECTS = \
"CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o"

# External object files for target gen_vocab
gen_vocab_EXTERNAL_OBJECTS =

../bin/gen_vocab: CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_calib3d.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_contrib.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_core.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_features2d.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_flann.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_gpu.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_highgui.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_imgproc.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_legacy.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_ml.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_nonfree.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_objdetect.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_photo.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_stitching.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_superres.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_video.so
../bin/gen_vocab: /opt/ros/groovy/lib/libopencv_videostab.so
../bin/gen_vocab: ../lib/libmfcc.so
../bin/gen_vocab: CMakeFiles/gen_vocab.dir/build.make
../bin/gen_vocab: CMakeFiles/gen_vocab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/gen_vocab"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gen_vocab.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gen_vocab.dir/build: ../bin/gen_vocab
.PHONY : CMakeFiles/gen_vocab.dir/build

CMakeFiles/gen_vocab.dir/requires: CMakeFiles/gen_vocab.dir/src/gen_vocab.cpp.o.requires
.PHONY : CMakeFiles/gen_vocab.dir/requires

CMakeFiles/gen_vocab.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gen_vocab.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gen_vocab.dir/clean

CMakeFiles/gen_vocab.dir/depend:
	cd /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/build /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/build /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/build/CMakeFiles/gen_vocab.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gen_vocab.dir/depend
