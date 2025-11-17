cmake_minimum_required(VERSION 3.20)
project(hsrp LANGUAGES C CXX)

# C Version Standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# C++ Version Standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Compiler options
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU" 
	OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
	add_cmpile_options(-Wall -Wextra -Wpedantic)

endif()

# Project subdirectories

add_subdirectory(API)
add_subdirectory(src)
add_subdirectory(tests)
