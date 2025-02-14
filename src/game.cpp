#include "../include/game.h"

void Game::gameProcess() {
    Board board;
    char player = 'X';
    std::cout << "Welcome to Morpions!" << std::endl;
    bool Running = true;
    while (Running) {
        do{
            std::cout << "Player 1 to Play : ";
            int Player1;
            std::cin >> Player1;
            displayBoard(board);
            std::cout << "Player 2 to Play : ";
            int Player2;
            std::cin >> Player2;
            displayBoard(board);
        }while (!gameOver(board));
    }
}
