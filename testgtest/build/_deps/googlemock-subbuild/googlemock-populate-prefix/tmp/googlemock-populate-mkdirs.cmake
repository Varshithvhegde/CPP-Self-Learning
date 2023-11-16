# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/workspace/CPP-Self-Learning/testgtest/build/_deps/googlemock-src"
  "/workspace/CPP-Self-Learning/testgtest/build/_deps/googlemock-build"
  "/workspace/CPP-Self-Learning/testgtest/build/_deps/googlemock-subbuild/googlemock-populate-prefix"
  "/workspace/CPP-Self-Learning/testgtest/build/_deps/googlemock-subbuild/googlemock-populate-prefix/tmp"
  "/workspace/CPP-Self-Learning/testgtest/build/_deps/googlemock-subbuild/googlemock-populate-prefix/src/googlemock-populate-stamp"
  "/workspace/CPP-Self-Learning/testgtest/build/_deps/googlemock-subbuild/googlemock-populate-prefix/src"
  "/workspace/CPP-Self-Learning/testgtest/build/_deps/googlemock-subbuild/googlemock-populate-prefix/src/googlemock-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/workspace/CPP-Self-Learning/testgtest/build/_deps/googlemock-subbuild/googlemock-populate-prefix/src/googlemock-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/workspace/CPP-Self-Learning/testgtest/build/_deps/googlemock-subbuild/googlemock-populate-prefix/src/googlemock-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
