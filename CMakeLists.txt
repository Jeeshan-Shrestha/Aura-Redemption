cmake_minimum_required(VERSION 3.10)
project(AURA)


set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")
set(LIB_DIR "${CMAKE_SOURCE_DIR}/lib")


include_directories(${INCLUDE_DIR})


link_directories(${LIB_DIR})

add_executable(Aura src/main.cpp src/Player.cpp src/Game.cpp)


target_link_libraries(Aura raylib opengl32 gdi32 winmm)

