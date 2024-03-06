cmake_minimum_required(VERSION 3.14)
project(FishTest)

find_package(raylib 5.0 QUIET)
include(FetchContent)
if (NOT raylib_FOUND)
    FetchContent_Declare(
            raylib
            URL https://github.com/raysan5/raylib/archive/refs/tags/5.0.tar.gz
    )
    FetchContent_MakeAvailable(raylib)
endif()
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_executable(FishTest "main.c")

#target_include_directories(main PUBLIC "${CMAKE_CURRENT_LIST_DIR}/include")
target_link_libraries(FishTest
        raylib
)
target_include_directories(FishTest PUBLIC "${raylib_SOURCE_DIR}/src")
file(COPY resources DESTINATION ${CMAKE_BINARY_DIR})