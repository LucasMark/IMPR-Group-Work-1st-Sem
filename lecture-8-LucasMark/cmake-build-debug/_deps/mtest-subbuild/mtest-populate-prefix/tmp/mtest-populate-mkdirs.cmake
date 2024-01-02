# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/_deps/mtest-src"
  "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/_deps/mtest-build"
  "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/_deps/mtest-subbuild/mtest-populate-prefix"
  "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/_deps/mtest-subbuild/mtest-populate-prefix/tmp"
  "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/_deps/mtest-subbuild/mtest-populate-prefix/src/mtest-populate-stamp"
  "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/_deps/mtest-subbuild/mtest-populate-prefix/src"
  "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/_deps/mtest-subbuild/mtest-populate-prefix/src/mtest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/_deps/mtest-subbuild/mtest-populate-prefix/src/mtest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Lucas/CLionProjects/lecture-8-LucasMark/cmake-build-debug/_deps/mtest-subbuild/mtest-populate-prefix/src/mtest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
