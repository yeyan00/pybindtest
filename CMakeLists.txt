
cmake_minimum_required(VERSION 2.8.11)
#project name
PROJECT(pycplus)

#head file path
#INCLUDE_DIRECTORIES(include)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}" -std=c++14)

#find_path
find_path(PYTHON3 HINTS "${PYTHON3}" "$ENV{PYTHON3}")
find_path(PYBIND11 HINTS "${PYBIND11}" "$ENV{PYBIND11}")

FILE(GLOB HDRS_FILES *.h *.hpp)
FILE(GLOB SRCS_FILES *.cpp *.c)


include_directories(include)
include_directories(${PYBIND11})
include_directories(${PYTHON3}/include)

add_library(${PROJECT_NAME} SHARED ${HDRS_FILES} ${SRCS_FILES})
target_link_libraries(${PROJECT_NAME} debug "${PYTHON3}/libs/python36.lib" optimized "${PYTHON3}/libs/python36.lib")