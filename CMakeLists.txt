cmake_minimum_required(VERSION 3.9.1)

project(MyCppCodeBook)

# Build with C++14
set(CMAKE_CXX_STANDARD 14)

# Check System Name.
message("This is a ${RED}${CMAKE_SYSTEM_NAME}${ColourReset} system")

# Create a macro can be used inside source code.
add_definitions(-DCMAKEMACROSEXAMPLE="Apple")

# Compile exec to build/
# ${CMAKE_BINARY_DIR}/.. install exec to project root.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY 
${CMAKE_BINARY_DIR})

add_executable(main main.cpp)