cmake_minimum_required(VERSION 3.21)
project(WGarudaTools)

# Lokasi Geode SDK yang benar
set(GEODE_SDK ${CMAKE_SOURCE_DIR}/../geode-sdk/geode)

# Load Geode CMake system
include(${GEODE_SDK}/cmake/Geode.cmake)

# Library mod kamu
add_library(WGarudaTools SHARED
    src/main.cpp
)

# Daftarkan sebagai mod Geode
geode_setup(WGarudaTools)