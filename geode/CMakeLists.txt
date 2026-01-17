cmake_minimum_required(VERSION 3.21)
project(WGarudaTools)

# Lokasi Geode SDK
set(GEODE_SDK ${CMAKE_SOURCE_DIR}/../geode-sdk)

# Load Geode CMake
include(${GEODE_SDK}/cmake/Geode.cmake)

# Buat library mod
add_library(WGarudaTools SHARED
    src/main.cpp
)

# Setup sebagai mod Geode
geode_setup(WGarudaTools)
