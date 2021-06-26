cmake_minimum_required(VERSION 3.5)

project(GitHubCIForQtTestLib VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

set(PROJECT_SOURCES
    dummyprinter.cpp
    dummyprinter.h
)

add_library(LogicLib STATIC ${PROJECT_SOURCES})

target_link_libraries(LogicLib
    Qt::Core
)

target_include_directories(LogicLib PUBLIC .)

