# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /usr/local/clion-2018.2.6/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /usr/local/clion-2018.2.6/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/Documents/ProgramacionC/ControlContinue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/Documents/ProgramacionC/ControlContinue/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ControlContinue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ControlContinue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ControlContinue.dir/flags.make

CMakeFiles/ControlContinue.dir/main.c.o: CMakeFiles/ControlContinue.dir/flags.make
CMakeFiles/ControlContinue.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/Documents/ProgramacionC/ControlContinue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ControlContinue.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ControlContinue.dir/main.c.o   -c /mnt/Documents/ProgramacionC/ControlContinue/main.c

CMakeFiles/ControlContinue.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ControlContinue.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/Documents/ProgramacionC/ControlContinue/main.c > CMakeFiles/ControlContinue.dir/main.c.i

CMakeFiles/ControlContinue.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ControlContinue.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/Documents/ProgramacionC/ControlContinue/main.c -o CMakeFiles/ControlContinue.dir/main.c.s

# Object files for target ControlContinue
ControlContinue_OBJECTS = \
"CMakeFiles/ControlContinue.dir/main.c.o"

# External object files for target ControlContinue
ControlContinue_EXTERNAL_OBJECTS =

ControlContinue: CMakeFiles/ControlContinue.dir/main.c.o
ControlContinue: CMakeFiles/ControlContinue.dir/build.make
ControlContinue: CMakeFiles/ControlContinue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/Documents/ProgramacionC/ControlContinue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ControlContinue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ControlContinue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ControlContinue.dir/build: ControlContinue

.PHONY : CMakeFiles/ControlContinue.dir/build

CMakeFiles/ControlContinue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ControlContinue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ControlContinue.dir/clean

CMakeFiles/ControlContinue.dir/depend:
	cd /mnt/Documents/ProgramacionC/ControlContinue/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/Documents/ProgramacionC/ControlContinue /mnt/Documents/ProgramacionC/ControlContinue /mnt/Documents/ProgramacionC/ControlContinue/cmake-build-debug /mnt/Documents/ProgramacionC/ControlContinue/cmake-build-debug /mnt/Documents/ProgramacionC/ControlContinue/cmake-build-debug/CMakeFiles/ControlContinue.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ControlContinue.dir/depend
