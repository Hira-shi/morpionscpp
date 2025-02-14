#include "../include/game.h"

void inGame(Board board, char C) {
    std::cout << "Choose a number between 1 and 9 : ";
    int Player;
    std::cin >> Player;
    while (!isPlayable(board, rowCount(Player), colCount(Player))) {
        std::cout << "Choose new number : ";
        std::cin >> Player;
        if (isPlayable(board, rowCount(Player), colCount(Player))) {
            placePiece(board, C, rowCount(Player), colCount(Player));
        }
    }
    displayBoard(board);
}

void Game::gameProcess() {
    Board board;
    std::cout << "Welcome to Morpions!" << std::endl;
    bool Running = true;
    while (Running) {
        do{
            inGame(board, 'X');
            inGame(board, 'O');
        }while (!gameOver(board));
        std::cout << "Game Over! Do you want a rematch (y/n) : ";
        char answer;
        std::cin >> answer;
        if (answer == 'y' || answer == 'Y') {
            Running = true;
        } else {
            Running = false;
        }
    }
}
