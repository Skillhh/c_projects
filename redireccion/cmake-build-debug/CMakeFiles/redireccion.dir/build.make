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
CMAKE_SOURCE_DIR = /mnt/Information/ProgramacionC/redireccion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/Information/ProgramacionC/redireccion/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/redireccion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/redireccion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/redireccion.dir/flags.make

CMakeFiles/redireccion.dir/main.c.o: CMakeFiles/redireccion.dir/flags.make
CMakeFiles/redireccion.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/Information/ProgramacionC/redireccion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/redireccion.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/redireccion.dir/main.c.o   -c /mnt/Information/ProgramacionC/redireccion/main.c

CMakeFiles/redireccion.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/redireccion.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/Information/ProgramacionC/redireccion/main.c > CMakeFiles/redireccion.dir/main.c.i

CMakeFiles/redireccion.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/redireccion.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/Information/ProgramacionC/redireccion/main.c -o CMakeFiles/redireccion.dir/main.c.s

# Object files for target redireccion
redireccion_OBJECTS = \
"CMakeFiles/redireccion.dir/main.c.o"

# External object files for target redireccion
redireccion_EXTERNAL_OBJECTS =

redireccion: CMakeFiles/redireccion.dir/main.c.o
redireccion: CMakeFiles/redireccion.dir/build.make
redireccion: CMakeFiles/redireccion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/Information/ProgramacionC/redireccion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable redireccion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/redireccion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/redireccion.dir/build: redireccion

.PHONY : CMakeFiles/redireccion.dir/build

CMakeFiles/redireccion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/redireccion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/redireccion.dir/clean

CMakeFiles/redireccion.dir/depend:
	cd /mnt/Information/ProgramacionC/redireccion/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/Information/ProgramacionC/redireccion /mnt/Information/ProgramacionC/redireccion /mnt/Information/ProgramacionC/redireccion/cmake-build-debug /mnt/Information/ProgramacionC/redireccion/cmake-build-debug /mnt/Information/ProgramacionC/redireccion/cmake-build-debug/CMakeFiles/redireccion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/redireccion.dir/depend

