cmake_minimum_required(VERSION 3.16)

project(QMLModule VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

add_subdirectory(ExtraModule/)
add_subdirectory(App/)
add_subdirectory(Main/)
