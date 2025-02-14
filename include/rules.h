#ifndef RULE_H
#define RULE_H

#include "..\include\board.h"

bool isWin(const char &C, const Board &board);
bool isPlayable(const Board &board);
bool gameOver(const Board &board);

#endif //RULE_H
