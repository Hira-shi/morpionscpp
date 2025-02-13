#include "../include/player.h"
#include "../include/game.h"
#include "../include/rules.h"


bool Player::isPlayerOne(char C) {
    if (p1 == C) return true;
    return false;
}

Board setBoard(const vector<std::vector<char>>& heu);

bool checkwin(const Board& heu);

bool isPlayable(std::vector<std::vector<char>> HEU) {
    Board board = setBoard(HEU);
    if (!board.isBoardFull()) {
        if (!checkwin(HEU)) {
            return true;
        }
    }
    return false;
}
