cmake_minimum_required(VERSION 3.7)
project (test_ev C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# build libev first
include(ExternalProject)
ExternalProject_Add(libev
    SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/deps/libev
    CONFIGURE_COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/deps/libev/configure --prefix=<INSTALL_DIR>
    BUILD_COMMAND ${MAKE})

add_subdirectory(src)
