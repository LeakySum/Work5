cmake_minimum_required(VERSION 2.8)

project (Work-5)
set(SOURCES main.cpp)
add_executable (${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} Work-5)
