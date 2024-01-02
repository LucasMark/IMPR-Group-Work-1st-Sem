# CMake generated Testfile for 
# Source directory: C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/test
# Build directory: C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/test/test_point_distance_tests.cmake")
add_test(test_point_distance_2d "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/test/test_point_distance_2d.exe")
set_tests_properties(test_point_distance_2d PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/test/CMakeLists.txt;15;add_test;C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/test/CMakeLists.txt;0;")
add_test(test_point_distance_nd "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/test/test_point_distance_nd.exe")
set_tests_properties(test_point_distance_nd PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/test/CMakeLists.txt;24;add_test;C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/test/CMakeLists.txt;0;")
subdirs("../_deps/mtest-build")
