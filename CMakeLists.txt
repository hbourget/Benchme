cmake_minimum_required(VERSION 3.20)
project(Benchme C)

set(CMAKE_C_STANDARD 99)

add_executable(Benchme sources/main.c sources/bench.c headers/bench.h sources/tri.c headers/tri.h sources/misc.c headers/misc.h)
