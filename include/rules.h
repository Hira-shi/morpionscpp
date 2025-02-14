#ifndef RULE_H
#define RULE_H

#include <vector>
#include "board.h"

class Rules {
private:

public:
    Rules() = default;
    ~Rules() = default;

    static void setBoard(const Board& board);
    static bool checkwin(const Board& board);
    static bool checkwin(const std::vector<std::vector<char>>& board);
    // Fonction test
    static bool checkWin(const std::vector<std::vector<char>>& win);
    bool checkDraw(const std::vector<std::vector<char>> &draw);
    bool isValidMove(Board HEU, int row, int col);
    char nextPlayer(char C);
};

#endif //RULE_H
