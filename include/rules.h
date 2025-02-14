#ifndef RULE_H
#define RULE_H

#include <vector>
#include "board.h"

using Board = std::vector<std::vector<char>>;


bool isWin(const char &C, const Board &board);
bool isPlayable(const Board &board, const int &row, const int &col);
bool gameOver(const Board &board);

#endif //RULE_H
