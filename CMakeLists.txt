cmake_minimum_required(VERSION 3.20)
project(DeveloperApp)

set(CMAKE_CXX_STANDARD 14)

add_library(developer STATIC developer.cpp junior_developer.cpp senior_developer.cpp)

add_executable(main main.cpp)

target_link_libraries(main developer)

add_compile_options(-Wall -Wextra -pedantic)

# Pfaddefinition für Logos
add_definitions(-DLOGO_PATH="${CMAKE_SOURCE_DIR}/logos")
