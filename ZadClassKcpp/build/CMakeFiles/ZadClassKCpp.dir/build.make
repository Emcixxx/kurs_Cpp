# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\build"

# Include any dependencies generated for this target.
include CMakeFiles/ZadClassKCpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ZadClassKCpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ZadClassKCpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ZadClassKCpp.dir/flags.make

CMakeFiles/ZadClassKCpp.dir/src/ZadKcpp.cc.obj: CMakeFiles/ZadClassKCpp.dir/flags.make
CMakeFiles/ZadClassKCpp.dir/src/ZadKcpp.cc.obj: CMakeFiles/ZadClassKCpp.dir/includes_CXX.rsp
CMakeFiles/ZadClassKCpp.dir/src/ZadKcpp.cc.obj: C:/Users/emili/OneDrive/Pulpit/Nowy\ folder/kurs_Cpp/ZadClassKcpp/src/ZadKcpp.cc
CMakeFiles/ZadClassKCpp.dir/src/ZadKcpp.cc.obj: CMakeFiles/ZadClassKCpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ZadClassKCpp.dir/src/ZadKcpp.cc.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ZadClassKCpp.dir/src/ZadKcpp.cc.obj -MF CMakeFiles\ZadClassKCpp.dir\src\ZadKcpp.cc.obj.d -o CMakeFiles\ZadClassKCpp.dir\src\ZadKcpp.cc.obj -c "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\src\ZadKcpp.cc"

CMakeFiles/ZadClassKCpp.dir/src/ZadKcpp.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ZadClassKCpp.dir/src/ZadKcpp.cc.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\src\ZadKcpp.cc" > CMakeFiles\ZadClassKCpp.dir\src\ZadKcpp.cc.i

CMakeFiles/ZadClassKCpp.dir/src/ZadKcpp.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ZadClassKCpp.dir/src/ZadKcpp.cc.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\src\ZadKcpp.cc" -o CMakeFiles\ZadClassKCpp.dir\src\ZadKcpp.cc.s

CMakeFiles/ZadClassKCpp.dir/main.cc.obj: CMakeFiles/ZadClassKCpp.dir/flags.make
CMakeFiles/ZadClassKCpp.dir/main.cc.obj: CMakeFiles/ZadClassKCpp.dir/includes_CXX.rsp
CMakeFiles/ZadClassKCpp.dir/main.cc.obj: C:/Users/emili/OneDrive/Pulpit/Nowy\ folder/kurs_Cpp/ZadClassKcpp/main.cc
CMakeFiles/ZadClassKCpp.dir/main.cc.obj: CMakeFiles/ZadClassKCpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ZadClassKCpp.dir/main.cc.obj"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ZadClassKCpp.dir/main.cc.obj -MF CMakeFiles\ZadClassKCpp.dir\main.cc.obj.d -o CMakeFiles\ZadClassKCpp.dir\main.cc.obj -c "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\main.cc"

CMakeFiles/ZadClassKCpp.dir/main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/ZadClassKCpp.dir/main.cc.i"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\main.cc" > CMakeFiles\ZadClassKCpp.dir\main.cc.i

CMakeFiles/ZadClassKCpp.dir/main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/ZadClassKCpp.dir/main.cc.s"
	C:\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\main.cc" -o CMakeFiles\ZadClassKCpp.dir\main.cc.s

# Object files for target ZadClassKCpp
ZadClassKCpp_OBJECTS = \
"CMakeFiles/ZadClassKCpp.dir/src/ZadKcpp.cc.obj" \
"CMakeFiles/ZadClassKCpp.dir/main.cc.obj"

# External object files for target ZadClassKCpp
ZadClassKCpp_EXTERNAL_OBJECTS =

ZadClassKCpp.exe: CMakeFiles/ZadClassKCpp.dir/src/ZadKcpp.cc.obj
ZadClassKCpp.exe: CMakeFiles/ZadClassKCpp.dir/main.cc.obj
ZadClassKCpp.exe: CMakeFiles/ZadClassKCpp.dir/build.make
ZadClassKCpp.exe: CMakeFiles/ZadClassKCpp.dir/linkLibs.rsp
ZadClassKCpp.exe: CMakeFiles/ZadClassKCpp.dir/objects1.rsp
ZadClassKCpp.exe: CMakeFiles/ZadClassKCpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ZadClassKCpp.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ZadClassKCpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ZadClassKCpp.dir/build: ZadClassKCpp.exe
.PHONY : CMakeFiles/ZadClassKCpp.dir/build

CMakeFiles/ZadClassKCpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ZadClassKCpp.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ZadClassKCpp.dir/clean

CMakeFiles/ZadClassKCpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp" "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp" "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\build" "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\build" "C:\Users\emili\OneDrive\Pulpit\Nowy folder\kurs_Cpp\ZadClassKcpp\build\CMakeFiles\ZadClassKCpp.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/ZadClassKCpp.dir/depend
