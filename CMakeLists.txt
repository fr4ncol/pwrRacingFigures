
cmake_minimum_required(VERSION 3.12)
project(Figures CXX)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wextra -pedantic -Werror)


add_executable(Figures src/main.cpp)
add_library(Figures_core src/Point.cpp src/Segment.cpp src/Triangle.cpp )
target_include_directories(Figures_core PUBLIC include)
target_link_libraries(Figures Figures_core)