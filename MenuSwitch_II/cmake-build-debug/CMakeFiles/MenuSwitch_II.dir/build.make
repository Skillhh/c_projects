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
CMAKE_SOURCE_DIR = /mnt/Documents/ProgramacionC/MenuSwitch_II

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/Documents/ProgramacionC/MenuSwitch_II/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MenuSwitch_II.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MenuSwitch_II.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MenuSwitch_II.dir/flags.make

CMakeFiles/MenuSwitch_II.dir/main.c.o: CMakeFiles/MenuSwitch_II.dir/flags.make
CMakeFiles/MenuSwitch_II.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/Documents/ProgramacionC/MenuSwitch_II/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MenuSwitch_II.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MenuSwitch_II.dir/main.c.o   -c /mnt/Documents/ProgramacionC/MenuSwitch_II/main.c

CMakeFiles/MenuSwitch_II.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MenuSwitch_II.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/Documents/ProgramacionC/MenuSwitch_II/main.c > CMakeFiles/MenuSwitch_II.dir/main.c.i

CMakeFiles/MenuSwitch_II.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MenuSwitch_II.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/Documents/ProgramacionC/MenuSwitch_II/main.c -o CMakeFiles/MenuSwitch_II.dir/main.c.s

# Object files for target MenuSwitch_II
MenuSwitch_II_OBJECTS = \
"CMakeFiles/MenuSwitch_II.dir/main.c.o"

# External object files for target MenuSwitch_II
MenuSwitch_II_EXTERNAL_OBJECTS =

MenuSwitch_II: CMakeFiles/MenuSwitch_II.dir/main.c.o
MenuSwitch_II: CMakeFiles/MenuSwitch_II.dir/build.make
MenuSwitch_II: CMakeFiles/MenuSwitch_II.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/Documents/ProgramacionC/MenuSwitch_II/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable MenuSwitch_II"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MenuSwitch_II.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MenuSwitch_II.dir/build: MenuSwitch_II

.PHONY : CMakeFiles/MenuSwitch_II.dir/build

CMakeFiles/MenuSwitch_II.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MenuSwitch_II.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MenuSwitch_II.dir/clean

CMakeFiles/MenuSwitch_II.dir/depend:
	cd /mnt/Documents/ProgramacionC/MenuSwitch_II/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/Documents/ProgramacionC/MenuSwitch_II /mnt/Documents/ProgramacionC/MenuSwitch_II /mnt/Documents/ProgramacionC/MenuSwitch_II/cmake-build-debug /mnt/Documents/ProgramacionC/MenuSwitch_II/cmake-build-debug /mnt/Documents/ProgramacionC/MenuSwitch_II/cmake-build-debug/CMakeFiles/MenuSwitch_II.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MenuSwitch_II.dir/depend

