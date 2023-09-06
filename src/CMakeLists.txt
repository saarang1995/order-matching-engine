project(OrderBook)

# Connecting cpp with its header file from include
add_library(orderbook orderbook.cpp)

target_include_directories(orderbook
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    )