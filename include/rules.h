#ifndef RULE_H
#define RULE_H

#include <vector>
#include "board.h"

class Rules {
private:

public:
    Rules();
    ~Rules();

    // Fonction test
    bool checkWin(const std::vector<std::vector<char>>& win);
    bool checkDraw(const std::vector<std::vector<char>> &draw);
    bool isValidMove(const Board &HEU, int row, int col);
    char nextPlayer(char C);
};

#endif //RULE_H
