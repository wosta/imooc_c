# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Develop\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Develop\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\workspace\C\imooc_c\chapter3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\workspace\C\imooc_c\chapter3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/03.data_types_float.c.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/03.data_types_float.c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/03.data_types_float.c.dir/flags.make

CMakeFiles/03.data_types_float.c.dir/03.data_types_float.c.obj: CMakeFiles/03.data_types_float.c.dir/flags.make
CMakeFiles/03.data_types_float.c.dir/03.data_types_float.c.obj: ../03.data_types_float.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\workspace\C\imooc_c\chapter3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/03.data_types_float.c.dir/03.data_types_float.c.obj"
	D:\Develop\mysys2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\03.data_types_float.c.dir\03.data_types_float.c.obj -c D:\workspace\C\imooc_c\chapter3\03.data_types_float.c

CMakeFiles/03.data_types_float.c.dir/03.data_types_float.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/03.data_types_float.c.dir/03.data_types_float.c.i"
	D:\Develop\mysys2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\workspace\C\imooc_c\chapter3\03.data_types_float.c > CMakeFiles\03.data_types_float.c.dir\03.data_types_float.c.i

CMakeFiles/03.data_types_float.c.dir/03.data_types_float.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/03.data_types_float.c.dir/03.data_types_float.c.s"
	D:\Develop\mysys2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\workspace\C\imooc_c\chapter3\03.data_types_float.c -o CMakeFiles\03.data_types_float.c.dir\03.data_types_float.c.s

# Object files for target 03.data_types_float.c
03_data_types_float_c_OBJECTS = \
"CMakeFiles/03.data_types_float.c.dir/03.data_types_float.c.obj"

# External object files for target 03.data_types_float.c
03_data_types_float_c_EXTERNAL_OBJECTS =

03.data_types_float.c.exe: CMakeFiles/03.data_types_float.c.dir/03.data_types_float.c.obj
03.data_types_float.c.exe: CMakeFiles/03.data_types_float.c.dir/build.make
03.data_types_float.c.exe: CMakeFiles/03.data_types_float.c.dir/linklibs.rsp
03.data_types_float.c.exe: CMakeFiles/03.data_types_float.c.dir/objects1.rsp
03.data_types_float.c.exe: CMakeFiles/03.data_types_float.c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\workspace\C\imooc_c\chapter3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 03.data_types_float.c.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\03.data_types_float.c.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/03.data_types_float.c.dir/build: 03.data_types_float.c.exe

.PHONY : CMakeFiles/03.data_types_float.c.dir/build

CMakeFiles/03.data_types_float.c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\03.data_types_float.c.dir\cmake_clean.cmake
.PHONY : CMakeFiles/03.data_types_float.c.dir/clean

CMakeFiles/03.data_types_float.c.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\workspace\C\imooc_c\chapter3 D:\workspace\C\imooc_c\chapter3 D:\workspace\C\imooc_c\chapter3\cmake-build-debug D:\workspace\C\imooc_c\chapter3\cmake-build-debug D:\workspace\C\imooc_c\chapter3\cmake-build-debug\CMakeFiles\03.data_types_float.c.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/03.data_types_float.c.dir/depend

