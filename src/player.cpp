#include "../include/player.h"
#include "../include/game.h"
#include "../include/rules.h"


bool Player::isPlayerOne(char C) {
    if (p1 == C) return true;
    return false;
}

Board setBoard(const vector<std::vector<char>>& heu);


bool Player::isPlayable(std::vector<std::vector<char>> HEU) {
    return !Rules::checkWin(HEU);
}
