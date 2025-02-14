#include "../include/game.h"

#include <rules.h>

char Game::getCurrentSymbol() {
    return currentSymbol;
}

bool Game::isGameInProgress() {
    Board board = Board();

    if (!board.isBoardFull()) {
        return true;
    }
    return false;
}

char Game::switchPlayer(char currentSymbol) {
    if (currentSymbol == 'X') {
        return 'O';
    } else if (currentSymbol == 'O') {
        return 'X';
    } else {
        return currentSymbol;
    }
}



bool Game::winConditions(std::vector<std::vector<char>> board) {
    return Rules::checkWin(board);
}


bool Game::gameReset(char choice) {
    Board board = Board();

    if (choice == 'X') {
        return false;
    } else if (choice == 'O') {
        board.resetBoard();
        return true;
    } else {
        return false;
    }
}
