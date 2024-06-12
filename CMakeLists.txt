include(FetchContent)

cmake_minimum_required(VERSION 3.29.3)

project(calaxian
    VERSION 0.1
    DESCRIPTION "Galaxian Remake"
    LANGUAGES CXX
)

set(RAYLIB_VERSION 5.0)

FetchContent_Declare(
    raylib
    URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
    FIND_PACKAGE_ARGS ${RAYLIB_VERSION}
)

set(BUILD_EXAMPLES OFF CACHE INTERNAL "")
FetchContent_MakeAvailable(raylib)

set(SOURCE_FILES
    src/main.cpp
    src/player.cpp
    src/player.hpp
    src/ui.cpp
    src/ui.hpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} raylib)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

target_compile_options(${PROJECT_NAME}
    PRIVATE
    -Wall
    -Wextra
    -Wpedantic
    -O3
)
