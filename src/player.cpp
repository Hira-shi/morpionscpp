#include "../include/player.h"
#include "../include/board.h"


bool Player::isPlayerOne(char C) {
    if (p1 == C) return true;
    return false;
}

Board setBoard(const vector<std::vector<char>>& heu);

bool isPlayable(std::vector<std::vector<char>> HEU) {
    Board board = setBoard(HEU);
    if (!board.isBoardFull()) {
        return true;
    }
    return false;
}
