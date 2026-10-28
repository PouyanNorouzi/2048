cmake_minimum_required(VERSION 3.30)

project(2048 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(2048 src/main.cpp src/game.cpp src/grid.cpp)

target_compile_options(2048 PRIVATE
    -Wall -Wextra -Wpedantic
)
