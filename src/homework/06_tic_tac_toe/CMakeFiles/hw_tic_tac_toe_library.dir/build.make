# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe

# Include any dependencies generated for this target.
include CMakeFiles/hw_tic_tac_toe_library.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hw_tic_tac_toe_library.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hw_tic_tac_toe_library.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw_tic_tac_toe_library.dir/flags.make

CMakeFiles/hw_tic_tac_toe_library.dir/codegen:
.PHONY : CMakeFiles/hw_tic_tac_toe_library.dir/codegen

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.o: CMakeFiles/hw_tic_tac_toe_library.dir/flags.make
CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.o: tic_tac_toe.cpp
CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.o: CMakeFiles/hw_tic_tac_toe_library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.o -MF CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.o.d -o CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.o -c /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe.cpp

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe.cpp > CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.i

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe.cpp -o CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.s

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.o: CMakeFiles/hw_tic_tac_toe_library.dir/flags.make
CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.o: tic_tac_toe_3.cpp
CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.o: CMakeFiles/hw_tic_tac_toe_library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.o -MF CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.o.d -o CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.o -c /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe_3.cpp

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe_3.cpp > CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.i

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe_3.cpp -o CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.s

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.o: CMakeFiles/hw_tic_tac_toe_library.dir/flags.make
CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.o: tic_tac_toe_4.cpp
CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.o: CMakeFiles/hw_tic_tac_toe_library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.o -MF CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.o.d -o CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.o -c /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe_4.cpp

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe_4.cpp > CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.i

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe_4.cpp -o CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.s

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.o: CMakeFiles/hw_tic_tac_toe_library.dir/flags.make
CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.o: tic_tac_toe_manager.cpp
CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.o: CMakeFiles/hw_tic_tac_toe_library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.o -MF CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.o.d -o CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.o -c /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe_manager.cpp

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe_manager.cpp > CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.i

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe_manager.cpp -o CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.s

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.o: CMakeFiles/hw_tic_tac_toe_library.dir/flags.make
CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.o: tic_tac_toe_data.cpp
CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.o: CMakeFiles/hw_tic_tac_toe_library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.o -MF CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.o.d -o CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.o -c /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe_data.cpp

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe_data.cpp > CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.i

CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/tic_tac_toe_data.cpp -o CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.s

# Object files for target hw_tic_tac_toe_library
hw_tic_tac_toe_library_OBJECTS = \
"CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.o" \
"CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.o" \
"CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.o" \
"CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.o" \
"CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.o"

# External object files for target hw_tic_tac_toe_library
hw_tic_tac_toe_library_EXTERNAL_OBJECTS =

libhw_tic_tac_toe_library.a: CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe.cpp.o
libhw_tic_tac_toe_library.a: CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_3.cpp.o
libhw_tic_tac_toe_library.a: CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_4.cpp.o
libhw_tic_tac_toe_library.a: CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_manager.cpp.o
libhw_tic_tac_toe_library.a: CMakeFiles/hw_tic_tac_toe_library.dir/tic_tac_toe_data.cpp.o
libhw_tic_tac_toe_library.a: CMakeFiles/hw_tic_tac_toe_library.dir/build.make
libhw_tic_tac_toe_library.a: CMakeFiles/hw_tic_tac_toe_library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libhw_tic_tac_toe_library.a"
	$(CMAKE_COMMAND) -P CMakeFiles/hw_tic_tac_toe_library.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw_tic_tac_toe_library.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw_tic_tac_toe_library.dir/build: libhw_tic_tac_toe_library.a
.PHONY : CMakeFiles/hw_tic_tac_toe_library.dir/build

CMakeFiles/hw_tic_tac_toe_library.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hw_tic_tac_toe_library.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hw_tic_tac_toe_library.dir/clean

CMakeFiles/hw_tic_tac_toe_library.dir/depend:
	cd /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe /Users/spaceParakeet/ACC/2025.1_Spring/COSC_1337/course-the-space-parakeet/src/homework/06_tic_tac_toe/CMakeFiles/hw_tic_tac_toe_library.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/hw_tic_tac_toe_library.dir/depend

