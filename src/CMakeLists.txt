cmake_minimum_required(VERSION 3.20)


set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(Surgery main.cpp ${MY_INCLUDE_DIR}/operations.h)
TARGET_INCLUDE_DIRECTORIES(Surgery PUBLIC ${MY_INCLUDE_DIR})