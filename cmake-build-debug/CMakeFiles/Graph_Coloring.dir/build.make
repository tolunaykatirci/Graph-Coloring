# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\tolun\Documents\GitHub\Graph-Coloring

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\tolun\Documents\GitHub\Graph-Coloring\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Graph_Coloring.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Graph_Coloring.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Graph_Coloring.dir/flags.make

CMakeFiles/Graph_Coloring.dir/main.c.obj: CMakeFiles/Graph_Coloring.dir/flags.make
CMakeFiles/Graph_Coloring.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tolun\Documents\GitHub\Graph-Coloring\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Graph_Coloring.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Graph_Coloring.dir\main.c.obj   -c C:\Users\tolun\Documents\GitHub\Graph-Coloring\main.c

CMakeFiles/Graph_Coloring.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Graph_Coloring.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\tolun\Documents\GitHub\Graph-Coloring\main.c > CMakeFiles\Graph_Coloring.dir\main.c.i

CMakeFiles/Graph_Coloring.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Graph_Coloring.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\tolun\Documents\GitHub\Graph-Coloring\main.c -o CMakeFiles\Graph_Coloring.dir\main.c.s

CMakeFiles/Graph_Coloring.dir/main.c.obj.requires:

.PHONY : CMakeFiles/Graph_Coloring.dir/main.c.obj.requires

CMakeFiles/Graph_Coloring.dir/main.c.obj.provides: CMakeFiles/Graph_Coloring.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\Graph_Coloring.dir\build.make CMakeFiles/Graph_Coloring.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/Graph_Coloring.dir/main.c.obj.provides

CMakeFiles/Graph_Coloring.dir/main.c.obj.provides.build: CMakeFiles/Graph_Coloring.dir/main.c.obj


CMakeFiles/Graph_Coloring.dir/Graph.c.obj: CMakeFiles/Graph_Coloring.dir/flags.make
CMakeFiles/Graph_Coloring.dir/Graph.c.obj: ../Graph.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tolun\Documents\GitHub\Graph-Coloring\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Graph_Coloring.dir/Graph.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Graph_Coloring.dir\Graph.c.obj   -c C:\Users\tolun\Documents\GitHub\Graph-Coloring\Graph.c

CMakeFiles/Graph_Coloring.dir/Graph.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Graph_Coloring.dir/Graph.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\tolun\Documents\GitHub\Graph-Coloring\Graph.c > CMakeFiles\Graph_Coloring.dir\Graph.c.i

CMakeFiles/Graph_Coloring.dir/Graph.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Graph_Coloring.dir/Graph.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\tolun\Documents\GitHub\Graph-Coloring\Graph.c -o CMakeFiles\Graph_Coloring.dir\Graph.c.s

CMakeFiles/Graph_Coloring.dir/Graph.c.obj.requires:

.PHONY : CMakeFiles/Graph_Coloring.dir/Graph.c.obj.requires

CMakeFiles/Graph_Coloring.dir/Graph.c.obj.provides: CMakeFiles/Graph_Coloring.dir/Graph.c.obj.requires
	$(MAKE) -f CMakeFiles\Graph_Coloring.dir\build.make CMakeFiles/Graph_Coloring.dir/Graph.c.obj.provides.build
.PHONY : CMakeFiles/Graph_Coloring.dir/Graph.c.obj.provides

CMakeFiles/Graph_Coloring.dir/Graph.c.obj.provides.build: CMakeFiles/Graph_Coloring.dir/Graph.c.obj


CMakeFiles/Graph_Coloring.dir/readFile.c.obj: CMakeFiles/Graph_Coloring.dir/flags.make
CMakeFiles/Graph_Coloring.dir/readFile.c.obj: ../readFile.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tolun\Documents\GitHub\Graph-Coloring\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Graph_Coloring.dir/readFile.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Graph_Coloring.dir\readFile.c.obj   -c C:\Users\tolun\Documents\GitHub\Graph-Coloring\readFile.c

CMakeFiles/Graph_Coloring.dir/readFile.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Graph_Coloring.dir/readFile.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\tolun\Documents\GitHub\Graph-Coloring\readFile.c > CMakeFiles\Graph_Coloring.dir\readFile.c.i

CMakeFiles/Graph_Coloring.dir/readFile.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Graph_Coloring.dir/readFile.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\tolun\Documents\GitHub\Graph-Coloring\readFile.c -o CMakeFiles\Graph_Coloring.dir\readFile.c.s

CMakeFiles/Graph_Coloring.dir/readFile.c.obj.requires:

.PHONY : CMakeFiles/Graph_Coloring.dir/readFile.c.obj.requires

CMakeFiles/Graph_Coloring.dir/readFile.c.obj.provides: CMakeFiles/Graph_Coloring.dir/readFile.c.obj.requires
	$(MAKE) -f CMakeFiles\Graph_Coloring.dir\build.make CMakeFiles/Graph_Coloring.dir/readFile.c.obj.provides.build
.PHONY : CMakeFiles/Graph_Coloring.dir/readFile.c.obj.provides

CMakeFiles/Graph_Coloring.dir/readFile.c.obj.provides.build: CMakeFiles/Graph_Coloring.dir/readFile.c.obj


CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj: CMakeFiles/Graph_Coloring.dir/flags.make
CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj: ../GraphColoring.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\tolun\Documents\GitHub\Graph-Coloring\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Graph_Coloring.dir\GraphColoring.c.obj   -c C:\Users\tolun\Documents\GitHub\Graph-Coloring\GraphColoring.c

CMakeFiles/Graph_Coloring.dir/GraphColoring.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Graph_Coloring.dir/GraphColoring.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\tolun\Documents\GitHub\Graph-Coloring\GraphColoring.c > CMakeFiles\Graph_Coloring.dir\GraphColoring.c.i

CMakeFiles/Graph_Coloring.dir/GraphColoring.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Graph_Coloring.dir/GraphColoring.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\tolun\Documents\GitHub\Graph-Coloring\GraphColoring.c -o CMakeFiles\Graph_Coloring.dir\GraphColoring.c.s

CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj.requires:

.PHONY : CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj.requires

CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj.provides: CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj.requires
	$(MAKE) -f CMakeFiles\Graph_Coloring.dir\build.make CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj.provides.build
.PHONY : CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj.provides

CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj.provides.build: CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj


# Object files for target Graph_Coloring
Graph_Coloring_OBJECTS = \
"CMakeFiles/Graph_Coloring.dir/main.c.obj" \
"CMakeFiles/Graph_Coloring.dir/Graph.c.obj" \
"CMakeFiles/Graph_Coloring.dir/readFile.c.obj" \
"CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj"

# External object files for target Graph_Coloring
Graph_Coloring_EXTERNAL_OBJECTS =

../Graph_Coloring.exe: CMakeFiles/Graph_Coloring.dir/main.c.obj
../Graph_Coloring.exe: CMakeFiles/Graph_Coloring.dir/Graph.c.obj
../Graph_Coloring.exe: CMakeFiles/Graph_Coloring.dir/readFile.c.obj
../Graph_Coloring.exe: CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj
../Graph_Coloring.exe: CMakeFiles/Graph_Coloring.dir/build.make
../Graph_Coloring.exe: CMakeFiles/Graph_Coloring.dir/linklibs.rsp
../Graph_Coloring.exe: CMakeFiles/Graph_Coloring.dir/objects1.rsp
../Graph_Coloring.exe: CMakeFiles/Graph_Coloring.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\tolun\Documents\GitHub\Graph-Coloring\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable ..\Graph_Coloring.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Graph_Coloring.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Graph_Coloring.dir/build: ../Graph_Coloring.exe

.PHONY : CMakeFiles/Graph_Coloring.dir/build

CMakeFiles/Graph_Coloring.dir/requires: CMakeFiles/Graph_Coloring.dir/main.c.obj.requires
CMakeFiles/Graph_Coloring.dir/requires: CMakeFiles/Graph_Coloring.dir/Graph.c.obj.requires
CMakeFiles/Graph_Coloring.dir/requires: CMakeFiles/Graph_Coloring.dir/readFile.c.obj.requires
CMakeFiles/Graph_Coloring.dir/requires: CMakeFiles/Graph_Coloring.dir/GraphColoring.c.obj.requires

.PHONY : CMakeFiles/Graph_Coloring.dir/requires

CMakeFiles/Graph_Coloring.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Graph_Coloring.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Graph_Coloring.dir/clean

CMakeFiles/Graph_Coloring.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\tolun\Documents\GitHub\Graph-Coloring C:\Users\tolun\Documents\GitHub\Graph-Coloring C:\Users\tolun\Documents\GitHub\Graph-Coloring\cmake-build-debug C:\Users\tolun\Documents\GitHub\Graph-Coloring\cmake-build-debug C:\Users\tolun\Documents\GitHub\Graph-Coloring\cmake-build-debug\CMakeFiles\Graph_Coloring.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Graph_Coloring.dir/depend

