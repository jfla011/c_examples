# CMake generated Testfile for 
# Source directory: /home/jason/proj/c_examples/katas/calculate_stats
# Build directory: /home/jason/proj/c_examples/katas/calculate_stats
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(check_calculate_stats "/home/jason/proj/c_examples/katas/calculate_stats/tests/check_calculate_stats")
set_tests_properties(check_calculate_stats PROPERTIES  _BACKTRACE_TRIPLES "/home/jason/proj/c_examples/katas/calculate_stats/CMakeLists.txt;79;add_test;/home/jason/proj/c_examples/katas/calculate_stats/CMakeLists.txt;0;")
subdirs("src")
subdirs("tests")
