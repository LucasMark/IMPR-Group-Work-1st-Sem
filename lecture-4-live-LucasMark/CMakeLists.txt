cmake_minimum_required(VERSION 3.10)
project(lecture4_live C)

set(CMAKE_C_STANDARD 99)

# All the fun is really in the src subfolder
add_subdirectory(src)
add_executable(new_target src/Gaet.c)
