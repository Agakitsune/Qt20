cmake_minimum_required(VERSION 3.17)

project(Qt20 VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_BUILD_TYPE Debug)

include_directories(
    ./
    ./include
)

find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Gui)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
# qt_standard_project_setup()

file(GLOB_RECURSE SRC
    main.cpp
    src/*.cpp
)

add_executable(qt ${SRC})

target_include_directories(qt PUBLIC
    "${PROJECT_BINARY_DIR}"
)

target_link_libraries(qt PRIVATE Qt6::Core)
target_link_libraries(qt PRIVATE Qt6::Gui)
target_link_libraries(qt PRIVATE Qt6::Widgets)
