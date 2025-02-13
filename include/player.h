#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "board.h"

class Player {
private:
    char p1 = 'X';
    char p2 = 'O';
public:
    Player();
    ~Player();

    bool isPlayerOne(char C);
    bool isPlayable(std::vector<std::vector<char>> board);
};

#endif //PLAYER_H
