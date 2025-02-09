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

add_executable(Morpions
    src/main.cpp
        include/board.h
        src/board.cpp
        src/rule.cpp
        src/game.cpp
        src/player.cpp
        include/game.h
        include/player.h
        include/rule.h
)

enable_testing()
add_subdirectory(tests)
