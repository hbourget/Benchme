cmake_minimum_required(VERSION 3.20)
project(Benchme C)

set(CMAKE_C_STANDARD 99)

add_executable(Benchme main.c fonctions.h tests.h)
