# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = C:\Users\carre\scoop\apps\cmake\3.31.4\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\carre\scoop\apps\cmake\3.31.4\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\dev\cpp\Morpions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\dev\cpp\Morpions\build

# Include any dependencies generated for this target.
include CMakeFiles/Morpions.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Morpions.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Morpions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Morpions.dir/flags.make

CMakeFiles/Morpions.dir/codegen:
.PHONY : CMakeFiles/Morpions.dir/codegen

CMakeFiles/Morpions.dir/src/main.cpp.obj: CMakeFiles/Morpions.dir/flags.make
CMakeFiles/Morpions.dir/src/main.cpp.obj: CMakeFiles/Morpions.dir/includes_CXX.rsp
CMakeFiles/Morpions.dir/src/main.cpp.obj: C:/dev/cpp/Morpions/src/main.cpp
CMakeFiles/Morpions.dir/src/main.cpp.obj: CMakeFiles/Morpions.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\cpp\Morpions\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Morpions.dir/src/main.cpp.obj"
	C:\Users\carre\scoop\apps\mingw\current\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Morpions.dir/src/main.cpp.obj -MF CMakeFiles\Morpions.dir\src\main.cpp.obj.d -o CMakeFiles\Morpions.dir\src\main.cpp.obj -c C:\dev\cpp\Morpions\src\main.cpp

CMakeFiles/Morpions.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Morpions.dir/src/main.cpp.i"
	C:\Users\carre\scoop\apps\mingw\current\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\cpp\Morpions\src\main.cpp > CMakeFiles\Morpions.dir\src\main.cpp.i

CMakeFiles/Morpions.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Morpions.dir/src/main.cpp.s"
	C:\Users\carre\scoop\apps\mingw\current\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\cpp\Morpions\src\main.cpp -o CMakeFiles\Morpions.dir\src\main.cpp.s

CMakeFiles/Morpions.dir/src/board.cpp.obj: CMakeFiles/Morpions.dir/flags.make
CMakeFiles/Morpions.dir/src/board.cpp.obj: CMakeFiles/Morpions.dir/includes_CXX.rsp
CMakeFiles/Morpions.dir/src/board.cpp.obj: C:/dev/cpp/Morpions/src/board.cpp
CMakeFiles/Morpions.dir/src/board.cpp.obj: CMakeFiles/Morpions.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\cpp\Morpions\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Morpions.dir/src/board.cpp.obj"
	C:\Users\carre\scoop\apps\mingw\current\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Morpions.dir/src/board.cpp.obj -MF CMakeFiles\Morpions.dir\src\board.cpp.obj.d -o CMakeFiles\Morpions.dir\src\board.cpp.obj -c C:\dev\cpp\Morpions\src\board.cpp

CMakeFiles/Morpions.dir/src/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Morpions.dir/src/board.cpp.i"
	C:\Users\carre\scoop\apps\mingw\current\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\cpp\Morpions\src\board.cpp > CMakeFiles\Morpions.dir\src\board.cpp.i

CMakeFiles/Morpions.dir/src/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Morpions.dir/src/board.cpp.s"
	C:\Users\carre\scoop\apps\mingw\current\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\cpp\Morpions\src\board.cpp -o CMakeFiles\Morpions.dir\src\board.cpp.s

CMakeFiles/Morpions.dir/src/game.cpp.obj: CMakeFiles/Morpions.dir/flags.make
CMakeFiles/Morpions.dir/src/game.cpp.obj: CMakeFiles/Morpions.dir/includes_CXX.rsp
CMakeFiles/Morpions.dir/src/game.cpp.obj: C:/dev/cpp/Morpions/src/game.cpp
CMakeFiles/Morpions.dir/src/game.cpp.obj: CMakeFiles/Morpions.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\cpp\Morpions\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Morpions.dir/src/game.cpp.obj"
	C:\Users\carre\scoop\apps\mingw\current\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Morpions.dir/src/game.cpp.obj -MF CMakeFiles\Morpions.dir\src\game.cpp.obj.d -o CMakeFiles\Morpions.dir\src\game.cpp.obj -c C:\dev\cpp\Morpions\src\game.cpp

CMakeFiles/Morpions.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Morpions.dir/src/game.cpp.i"
	C:\Users\carre\scoop\apps\mingw\current\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\cpp\Morpions\src\game.cpp > CMakeFiles\Morpions.dir\src\game.cpp.i

CMakeFiles/Morpions.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Morpions.dir/src/game.cpp.s"
	C:\Users\carre\scoop\apps\mingw\current\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\cpp\Morpions\src\game.cpp -o CMakeFiles\Morpions.dir\src\game.cpp.s

CMakeFiles/Morpions.dir/src/rules.cpp.obj: CMakeFiles/Morpions.dir/flags.make
CMakeFiles/Morpions.dir/src/rules.cpp.obj: CMakeFiles/Morpions.dir/includes_CXX.rsp
CMakeFiles/Morpions.dir/src/rules.cpp.obj: C:/dev/cpp/Morpions/src/rules.cpp
CMakeFiles/Morpions.dir/src/rules.cpp.obj: CMakeFiles/Morpions.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\dev\cpp\Morpions\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Morpions.dir/src/rules.cpp.obj"
	C:\Users\carre\scoop\apps\mingw\current\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Morpions.dir/src/rules.cpp.obj -MF CMakeFiles\Morpions.dir\src\rules.cpp.obj.d -o CMakeFiles\Morpions.dir\src\rules.cpp.obj -c C:\dev\cpp\Morpions\src\rules.cpp

CMakeFiles/Morpions.dir/src/rules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Morpions.dir/src/rules.cpp.i"
	C:\Users\carre\scoop\apps\mingw\current\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\dev\cpp\Morpions\src\rules.cpp > CMakeFiles\Morpions.dir\src\rules.cpp.i

CMakeFiles/Morpions.dir/src/rules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Morpions.dir/src/rules.cpp.s"
	C:\Users\carre\scoop\apps\mingw\current\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\dev\cpp\Morpions\src\rules.cpp -o CMakeFiles\Morpions.dir\src\rules.cpp.s

# Object files for target Morpions
Morpions_OBJECTS = \
"CMakeFiles/Morpions.dir/src/main.cpp.obj" \
"CMakeFiles/Morpions.dir/src/board.cpp.obj" \
"CMakeFiles/Morpions.dir/src/game.cpp.obj" \
"CMakeFiles/Morpions.dir/src/rules.cpp.obj"

# External object files for target Morpions
Morpions_EXTERNAL_OBJECTS =

Morpions.exe: CMakeFiles/Morpions.dir/src/main.cpp.obj
Morpions.exe: CMakeFiles/Morpions.dir/src/board.cpp.obj
Morpions.exe: CMakeFiles/Morpions.dir/src/game.cpp.obj
Morpions.exe: CMakeFiles/Morpions.dir/src/rules.cpp.obj
Morpions.exe: CMakeFiles/Morpions.dir/build.make
Morpions.exe: CMakeFiles/Morpions.dir/linkLibs.rsp
Morpions.exe: CMakeFiles/Morpions.dir/objects1.rsp
Morpions.exe: CMakeFiles/Morpions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\dev\cpp\Morpions\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Morpions.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Morpions.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Morpions.dir/build: Morpions.exe
.PHONY : CMakeFiles/Morpions.dir/build

CMakeFiles/Morpions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Morpions.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Morpions.dir/clean

CMakeFiles/Morpions.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\dev\cpp\Morpions C:\dev\cpp\Morpions C:\dev\cpp\Morpions\build C:\dev\cpp\Morpions\build C:\dev\cpp\Morpions\build\CMakeFiles\Morpions.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Morpions.dir/depend

