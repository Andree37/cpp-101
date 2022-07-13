cmake_minimum_required(VERSION 3.8)
project(cpp-101)

set(CMAKE_CXX_STANDARD 20) # Try 11 if your compiler does not support C++20

add_subdirectory("${PROJECT_SOURCE_DIR}/00-beginning" "${PROJECT_SOURCE_DIR}/00-beginning/build")
add_subdirectory("${PROJECT_SOURCE_DIR}/01-initialization" "${PROJECT_SOURCE_DIR}/01-initialization/build")
add_subdirectory("${PROJECT_SOURCE_DIR}/02-iostream-intro" "${PROJECT_SOURCE_DIR}/02-iostream-intro/build")
add_subdirectory("${PROJECT_SOURCE_DIR}/03-first-program" "${PROJECT_SOURCE_DIR}/03-first-program/build")
add_subdirectory("${PROJECT_SOURCE_DIR}/04-chapter01-quiz" "${PROJECT_SOURCE_DIR}/04-chapter01-quiz/build")
add_subdirectory("${PROJECT_SOURCE_DIR}/05-functions-intro" "${PROJECT_SOURCE_DIR}/05-functions-intro/build")
add_subdirectory("${PROJECT_SOURCE_DIR}/06-conversions" "${PROJECT_SOURCE_DIR}/06-conversions/build")
