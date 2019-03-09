cmake_minimum_required(VERSION 3.10)
project(mockingtester)

set(CMAKE_MODULE_PATH /usr/share/SFML/cmake/Modules)
find_package(SFML REQUIRED graphics)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_subdirectory(TestApp)
