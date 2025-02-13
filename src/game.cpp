#include "../include/game.h"

char Game::getCurrentSymbol() {
    return currentSymbol;
}

bool isGameInProgress() {
    Board board = Board();

    if (!board.isBoardFull()) {
        return true;
    }
    return false;
}
