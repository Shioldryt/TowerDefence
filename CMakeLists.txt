cmake_minimum_required(VERSION 3.26)
project(TowerDefence)

set(CMAKE_CXX_STANDARD 17)

add_executable(TowerDefence main.cpp
        src/UI.cpp
        src/UI.h
        src/Tank.cpp
        src/Tank.h)
find_package(SFML 2.6.0 COMPONENTS graphics window system REQUIRED)
target_link_libraries(TowerDefence PRIVATE sfml-graphics sfml-window sfml-system)
