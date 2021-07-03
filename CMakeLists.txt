cmake_minimum_required(VERSION 3.0)
project(thinkcell VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)

include(GoogleTest.cmake)
include(CTest)

include_directories(include)

add_subdirectory(src)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    add_subdirectory(tests)
endif()
