cmake_minimum_required(VERSION 3.10)
project(MyProjectName VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR}/manager)

add_executable(MyProjectName app.cpp manager/SubscriptionManager.cpp)