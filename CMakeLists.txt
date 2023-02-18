cmake_minimum_required(VERSION 3.12.)
set(CMAKE_CXX_STANDARD 20)

project (project_loger)

set(SOURCES
    src/loger.cpp
    src/main.cpp
)

add_executable(project_loger ${SOURCES})

target_include_directories(project_loger
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)