cmake_minimum_required(VERSION 3.27)
project(OrderBook)


add_subdirectory(include)
add_subdirectory(src)

# giving users to build the project or not

option(BUILD_EXAMPLES "Whether to build the examples or not"
    ON)

if(BUILD_EXAMPLES)
    message(STATUS "Buidling examples...")
    add_subdirectory(example)
endif()