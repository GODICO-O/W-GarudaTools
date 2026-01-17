cmake_minimum_required(VERSION 3.21)
project(WGarudaTools)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Tambahkan Geode SDK sebagai subproject
add_subdirectory(${CMAKE_SOURCE_DIR}/../geode-sdk geode-sdk-build)

# Buat library mod kamu
add_library(WGarudaTools SHARED
    src/main.cpp
)

# Link ke target Geode utama
target_link_libraries(WGarudaTools PRIVATE geode)

# Include header Geode
target_include_directories(WGarudaTools PRIVATE
    ${CMAKE_SOURCE_DIR}/../geode-sdk
)