cmake_minimum_required(VERSION 3.20)
project(DeveloperApp)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_library(developer STATIC src/developer.cpp src/junior_developer.cpp src/senior_developer.cpp)

add_executable(main src/main.cpp)

target_link_libraries(main developer)

add_compile_options(-Wall -Wextra -pedantic)

# Pfaddefinition für Logos
add_definitions(-DLOGO_PATH="${CMAKE_SOURCE_DIR}/logos")
