cmake_minimum_required(VERSION 3.2)

project(helloworld)

configure_file(version.h.in version.hpp)

add_executable("${PROJECT_NAME}_cli" "main.cpp")
add_library(${PROJECT_NAME} "lib.cpp")
