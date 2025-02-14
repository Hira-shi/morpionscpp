#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iostream>
using namespace std;

using Board = vector<vector<char>>;

Board createBoard(Board board);
void placePiece(Board board, char C, int row, int col);
void displayBoard(Board board);
int rowCount(int n);
int colCount(int n);

#endif //BOARD_H