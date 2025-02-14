#include "../include/game.h"
#include <iostream>


int main() {

    std::cout << "Welcome to Morpions!" << std::endl;
    bool Running = true;
    while (Running) {
        Game::gameProcess();
        std::cout << "Rematch ? (y/n) : ";
        char answer;
        std::cin >> answer;
        if (answer == 'y') {
            Running = true;
        } else {
            Running = false;
        }
    }

    return 0;
}
