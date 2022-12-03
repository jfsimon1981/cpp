project(p)
cmake_minimum_required(VERSION 3.20)
add_executable(out src/main.cpp src/time.cpp src/event.cpp)
target_compile_options(out PUBLIC -std=c++20)