cmake_minimum_required(VERSION 3.20)
project(DeveloperApp)

set(CMAKE_CXX_STANDARD 14)

# Quellcode-Verzeichnis hinzufügen
include_directories(src)

# Erstellen der statischen Bibliothek "developer" aus den Quellcode-Dateien
add_library(developer STATIC src/developer.cpp src/developer_child.cpp)

# Erstellen der ausführbaren Datei "main" aus der main.cpp
add_executable(main src/main.cpp)

# Verlinken der Bibliothek "developer" mit der ausführbaren Datei "main"
target_link_libraries(main developer)

# Compiler-Optionen hinzufügen
add_compile_options(-Wall -Wextra -pedantic)

# Definition des Pfads zu den Logo-Dateien
add_definitions(-DLOGO_PATH="${CMAKE_SOURCE_DIR}/logos")