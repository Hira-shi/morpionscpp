#include "../include/game.h"
#include "../include/rules.h"
#include "../include/board.h"
#include <iostream>

void inGame(const Board &board, const char &C) {
    std::cout << "Choose a number between 1 and 9 : ";
    int Player;
    std::cin >> Player;
    std::cout << std::endl;
    while (rowCount(Player) == 3) {
        std::cout << "Choose new number : ";
        std::cin >> Player;
        if (rowCount(Player) != 3) {
            placePiece(board, C, rowCount(Player), colCount(Player));
            break;
        }
    }
    displayBoard(board);
}

void Game::gameProcess() {
    Board board = createBoard();  // Initialisation du board
    do {
        inGame(board, 'X');
        if (gameOver(board)) break;
        inGame(board, 'O');
    } while (!gameOver(board));

    // Afficher le résultat
    if (isWin('X', board)) std::cout << "Player X wins!" << std::endl;
    else if (isWin('O', board)) std::cout << "Player O wins!" << std::endl;
    else std::cout << "Draw!" << std::endl;
}
