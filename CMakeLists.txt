cmake_minimum_required(VERSION 3.24)
project(parallel CXX)
add_executable(main main.cpp)
target_compile_features(main PUBLIC cxx_std_17)