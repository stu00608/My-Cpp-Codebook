cmake_minimum_required(VERSION 3.9.1)

project(MyCppCodeBook)

# Build with C++14
set(CMAKE_CXX_STANDARD 14)

# Where the executable.
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
# Where libraries.
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)

add_library(math SHARED lib/math/operations.cpp)
add_executable(main main.cpp)
target_link_libraries(main math)