# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jason/proj/c_examples/katas/calculate_stats

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jason/proj/c_examples/katas/calculate_stats

# Include any dependencies generated for this target.
include tests/CMakeFiles/check_calculate_stats.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/check_calculate_stats.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/check_calculate_stats.dir/flags.make

tests/CMakeFiles/check_calculate_stats.dir/check_calculate_stats.c.o: tests/CMakeFiles/check_calculate_stats.dir/flags.make
tests/CMakeFiles/check_calculate_stats.dir/check_calculate_stats.c.o: tests/check_calculate_stats.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jason/proj/c_examples/katas/calculate_stats/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/CMakeFiles/check_calculate_stats.dir/check_calculate_stats.c.o"
	cd /home/jason/proj/c_examples/katas/calculate_stats/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/check_calculate_stats.dir/check_calculate_stats.c.o   -c /home/jason/proj/c_examples/katas/calculate_stats/tests/check_calculate_stats.c

tests/CMakeFiles/check_calculate_stats.dir/check_calculate_stats.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/check_calculate_stats.dir/check_calculate_stats.c.i"
	cd /home/jason/proj/c_examples/katas/calculate_stats/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jason/proj/c_examples/katas/calculate_stats/tests/check_calculate_stats.c > CMakeFiles/check_calculate_stats.dir/check_calculate_stats.c.i

tests/CMakeFiles/check_calculate_stats.dir/check_calculate_stats.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/check_calculate_stats.dir/check_calculate_stats.c.s"
	cd /home/jason/proj/c_examples/katas/calculate_stats/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jason/proj/c_examples/katas/calculate_stats/tests/check_calculate_stats.c -o CMakeFiles/check_calculate_stats.dir/check_calculate_stats.c.s

# Object files for target check_calculate_stats
check_calculate_stats_OBJECTS = \
"CMakeFiles/check_calculate_stats.dir/check_calculate_stats.c.o"

# External object files for target check_calculate_stats
check_calculate_stats_EXTERNAL_OBJECTS =

tests/check_calculate_stats: tests/CMakeFiles/check_calculate_stats.dir/check_calculate_stats.c.o
tests/check_calculate_stats: tests/CMakeFiles/check_calculate_stats.dir/build.make
tests/check_calculate_stats: src/libcalculate_stats.a
tests/check_calculate_stats: tests/CMakeFiles/check_calculate_stats.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jason/proj/c_examples/katas/calculate_stats/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable check_calculate_stats"
	cd /home/jason/proj/c_examples/katas/calculate_stats/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/check_calculate_stats.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/check_calculate_stats.dir/build: tests/check_calculate_stats

.PHONY : tests/CMakeFiles/check_calculate_stats.dir/build

tests/CMakeFiles/check_calculate_stats.dir/clean:
	cd /home/jason/proj/c_examples/katas/calculate_stats/tests && $(CMAKE_COMMAND) -P CMakeFiles/check_calculate_stats.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/check_calculate_stats.dir/clean

tests/CMakeFiles/check_calculate_stats.dir/depend:
	cd /home/jason/proj/c_examples/katas/calculate_stats && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jason/proj/c_examples/katas/calculate_stats /home/jason/proj/c_examples/katas/calculate_stats/tests /home/jason/proj/c_examples/katas/calculate_stats /home/jason/proj/c_examples/katas/calculate_stats/tests /home/jason/proj/c_examples/katas/calculate_stats/tests/CMakeFiles/check_calculate_stats.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/check_calculate_stats.dir/depend

