# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /opt/clion-2018.3.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.3.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/Information/ProgramacionC/usoFprintf

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/Information/ProgramacionC/usoFprintf/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/usoFprintf.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/usoFprintf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/usoFprintf.dir/flags.make

CMakeFiles/usoFprintf.dir/main.c.o: CMakeFiles/usoFprintf.dir/flags.make
CMakeFiles/usoFprintf.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/Information/ProgramacionC/usoFprintf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/usoFprintf.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/usoFprintf.dir/main.c.o   -c /mnt/Information/ProgramacionC/usoFprintf/main.c

CMakeFiles/usoFprintf.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/usoFprintf.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/Information/ProgramacionC/usoFprintf/main.c > CMakeFiles/usoFprintf.dir/main.c.i

CMakeFiles/usoFprintf.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/usoFprintf.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/Information/ProgramacionC/usoFprintf/main.c -o CMakeFiles/usoFprintf.dir/main.c.s

# Object files for target usoFprintf
usoFprintf_OBJECTS = \
"CMakeFiles/usoFprintf.dir/main.c.o"

# External object files for target usoFprintf
usoFprintf_EXTERNAL_OBJECTS =

usoFprintf: CMakeFiles/usoFprintf.dir/main.c.o
usoFprintf: CMakeFiles/usoFprintf.dir/build.make
usoFprintf: CMakeFiles/usoFprintf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/Information/ProgramacionC/usoFprintf/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable usoFprintf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/usoFprintf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/usoFprintf.dir/build: usoFprintf

.PHONY : CMakeFiles/usoFprintf.dir/build

CMakeFiles/usoFprintf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/usoFprintf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/usoFprintf.dir/clean

CMakeFiles/usoFprintf.dir/depend:
	cd /mnt/Information/ProgramacionC/usoFprintf/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/Information/ProgramacionC/usoFprintf /mnt/Information/ProgramacionC/usoFprintf /mnt/Information/ProgramacionC/usoFprintf/cmake-build-debug /mnt/Information/ProgramacionC/usoFprintf/cmake-build-debug /mnt/Information/ProgramacionC/usoFprintf/cmake-build-debug/CMakeFiles/usoFprintf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/usoFprintf.dir/depend

