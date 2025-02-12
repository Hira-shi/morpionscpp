#ifndef RULE_H
#define RULE_H

#include <vector>

class Rules {
private:

public:
    Rules();
    ~Rules();

    // Fonction test
    bool checkWin(std::vector<std::vector<char>> win);
    bool checkDraw(std::vector<std::vector<char>> draw);
    bool isValidMove(std::vector<std::vector<char>> HEU, int row, int col);
    char nextPlayer(char C);
};

#endif //RULE_H
