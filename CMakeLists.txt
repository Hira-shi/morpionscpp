cmake_minimum_required(VERSION 3.14)
project(Morpions LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

add_library(MorpionsLib
    src/board.cpp
    src/rules.cpp
    src/game.cpp
    src/player.cpp
)

target_include_directories(MorpionsLib PUBLIC include)

add_executable(Morpions
    src/main.cpp
)

target_link_libraries(Morpions PRIVATE MorpionsLib)


enable_testing()
add_subdirectory(tests)
