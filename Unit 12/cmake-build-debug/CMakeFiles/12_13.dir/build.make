# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "D:\CLion\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\C++ Project\C++ Primer\Unit 12"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\C++ Project\C++ Primer\Unit 12\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/12_13.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/12_13.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/12_13.dir/flags.make

CMakeFiles/12_13.dir/12_13.cpp.obj: CMakeFiles/12_13.dir/flags.make
CMakeFiles/12_13.dir/12_13.cpp.obj: ../12_13.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\C++ Project\C++ Primer\Unit 12\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/12_13.dir/12_13.cpp.obj"
	E:\Sublime\MinGW64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\12_13.dir\12_13.cpp.obj -c "E:\C++ Project\C++ Primer\Unit 12\12_13.cpp"

CMakeFiles/12_13.dir/12_13.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/12_13.dir/12_13.cpp.i"
	E:\Sublime\MinGW64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\C++ Project\C++ Primer\Unit 12\12_13.cpp" > CMakeFiles\12_13.dir\12_13.cpp.i

CMakeFiles/12_13.dir/12_13.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/12_13.dir/12_13.cpp.s"
	E:\Sublime\MinGW64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\C++ Project\C++ Primer\Unit 12\12_13.cpp" -o CMakeFiles\12_13.dir\12_13.cpp.s

# Object files for target 12_13
12_13_OBJECTS = \
"CMakeFiles/12_13.dir/12_13.cpp.obj"

# External object files for target 12_13
12_13_EXTERNAL_OBJECTS =

12_13.exe: CMakeFiles/12_13.dir/12_13.cpp.obj
12_13.exe: CMakeFiles/12_13.dir/build.make
12_13.exe: CMakeFiles/12_13.dir/linklibs.rsp
12_13.exe: CMakeFiles/12_13.dir/objects1.rsp
12_13.exe: CMakeFiles/12_13.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\C++ Project\C++ Primer\Unit 12\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 12_13.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\12_13.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/12_13.dir/build: 12_13.exe

.PHONY : CMakeFiles/12_13.dir/build

CMakeFiles/12_13.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\12_13.dir\cmake_clean.cmake
.PHONY : CMakeFiles/12_13.dir/clean

CMakeFiles/12_13.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\C++ Project\C++ Primer\Unit 12" "E:\C++ Project\C++ Primer\Unit 12" "E:\C++ Project\C++ Primer\Unit 12\cmake-build-debug" "E:\C++ Project\C++ Primer\Unit 12\cmake-build-debug" "E:\C++ Project\C++ Primer\Unit 12\cmake-build-debug\CMakeFiles\12_13.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/12_13.dir/depend

