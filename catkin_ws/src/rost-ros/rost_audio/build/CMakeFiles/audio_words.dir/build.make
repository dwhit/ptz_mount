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
include CMakeFiles/audio_words.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/audio_words.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/audio_words.dir/flags.make

CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: CMakeFiles/audio_words.dir/flags.make
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: ../src/mfcc_wav.cpp
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: ../manifest.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/cpp_common/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/rostime/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/roscpp_traits/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/roscpp_serialization/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/genmsg/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/genpy/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/message_runtime/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/rosconsole/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/std_msgs/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/rosgraph_msgs/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/xmlrpcpp/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/roscpp/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/geometry_msgs/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/sensor_msgs/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_common/manifest.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/catkin/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/opencv2/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /opt/ros/groovy/share/cv_bridge/package.xml
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_common/msg_gen/generated
CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o: /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_common/srv_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o -c /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/src/mfcc_wav.cpp

CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/src/mfcc_wav.cpp > CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.i

CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/src/mfcc_wav.cpp -o CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.s

CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o.requires:
.PHONY : CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o.requires

CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o.provides: CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o.requires
	$(MAKE) -f CMakeFiles/audio_words.dir/build.make CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o.provides.build
.PHONY : CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o.provides

CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o.provides.build: CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o

# Object files for target audio_words
audio_words_OBJECTS = \
"CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o"

# External object files for target audio_words
audio_words_EXTERNAL_OBJECTS =

../bin/audio_words: CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o
../bin/audio_words: ../lib/libmfcc.so
../bin/audio_words: CMakeFiles/audio_words.dir/build.make
../bin/audio_words: CMakeFiles/audio_words.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/audio_words"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/audio_words.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/audio_words.dir/build: ../bin/audio_words
.PHONY : CMakeFiles/audio_words.dir/build

CMakeFiles/audio_words.dir/requires: CMakeFiles/audio_words.dir/src/mfcc_wav.cpp.o.requires
.PHONY : CMakeFiles/audio_words.dir/requires

CMakeFiles/audio_words.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/audio_words.dir/cmake_clean.cmake
.PHONY : CMakeFiles/audio_words.dir/clean

CMakeFiles/audio_words.dir/depend:
	cd /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/build /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/build /home/thalassa/dwhitney/catkin_ws/src/rost-ros/rost_audio/build/CMakeFiles/audio_words.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/audio_words.dir/depend
