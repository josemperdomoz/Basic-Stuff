cmake_minimum_required(VERSION 3.5)
project(DSP)

set(CMAKE_CXX_STANDARD 11)
find_package(PythonLibs 2.7)
target_include_directories(DSP PRIVATE ${PYTHON_INCLUDE_DIRS})
target_link_libraries(DSP ${PYTHON_LIBRARIES})


add_executable(DSP main.cpp)