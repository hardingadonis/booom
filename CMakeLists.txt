cmake_minimum_required(VERSION 3.10.2)

project(dino-gun VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(EXECUTABLE_NAME "dino-gun")

file(GLOB_RECURSE DINO_SRC "src/*.cpp")
add_executable(${EXECUTABLE_NAME} WIN32 ${DINO_SRC})
target_include_directories(${EXECUTABLE_NAME} PUBLIC "${CMAKE_SOURCE_DIR}/src")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/SDL2)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(SDL2_mixer REQUIRED)

target_link_libraries(${EXECUTABLE_NAME} PUBLIC SDL2::Main SDL2::Core SDL2::Image SDL2::TTF SDL2::Mixer)

install(TARGETS ${EXECUTABLE_NAME} DESTINATION "${CMAKE_SOURCE_DIR}/bin")
install(DIRECTORY "${CMAKE_SOURCE_DIR}/res" DESTINATION "${CMAKE_SOURCE_DIR}/bin")