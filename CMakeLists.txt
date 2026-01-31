cmake_minimum_required(VERSION 3.10)
project(SuperShotGun VERSION 1.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_definitions(-DUNICODE -D_UNICODE)
set(PROJECT_SOURCES
    src/main.cpp
    src/Amender.cpp
    src/Amender.hpp
    src/File.cpp
    src/File.hpp
    src/Help.cpp
    src/Help.hpp
    src/resource.h
)
if(WIN32)
    list(APPEND PROJECT_SOURCES "src/resource.h")
endif()
add_executable(SuperShotGun ${PROJECT_SOURCES})
if(WIN32)
    target_link_libraries(SuperShotGun PRIVATE 
        User32.lib
        Gdi32.lib
        Shell32.lib
        Advapi32.lib
    )
endif()
target_include_directories(SuperShotGun PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
