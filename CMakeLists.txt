cmake_minimum_required(VERSION 3.14)
project(Morpions VERSION 1.0 LANGUAGES CXX)

# Définit le standard C++ à utiliser
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Création de l'exécutable
add_executable(Morpions
        src/main.cpp
        src/board.cpp
        src/game.cpp
        src/rules.cpp
)

# Ajoute le dossier include pour les headers
target_include_directories(Morpions PRIVATE include)