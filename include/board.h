#ifndef BOARD_H
#define BOARD_H

#include "rules.h"
#include <vector>

using Board = std::vector<std::vector<char>>;

Board createBoard();
void placePiece(Board& board, char C, int row, int col);  // Ajout de référence
void displayBoard(const Board& board);  // Ajout de const
int rowCount(int n);
int colCount(int n);

#endif //BOARD_H