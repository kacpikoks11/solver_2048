#include <iostream>
#include <string>
#include <ctime>

enum Move {
    w = 0,
    a = 1,
    s = 2,
    d = 3
};

struct Eval {
    float val = 0;
    Move move;
    Eval(int val) {
        this->val = val;
    }
};


Eval calculatePos(int board[4][4], int depth);



int main()
{
    srand(time(NULL));
    std::string word = "";
    int line = 0;
    int board[4][4];
    do {
        std::cin >> word;
        board[0][line] = stoi(word);
        std::cin >> word;
        board[1][line] = stoi(word);
        std::cin >> word;
        board[2][line] = stoi(word);
        std::cin >> word;
        board[3][line] = stoi(word);
        line++;
        if (line == 4)
            break;

    } while (std::cin.rdbuf()->in_avail() > 0);
    //for (int i = 0; i < 4; ++i) {
    //    for (int j = 0; j < 4; ++j) {
    //    }
    //}
    switch (calculatePos(board,1).move) {
    case w:
        std::cout << "w";
        break;
    case a:
        std::cout << "a";
        break;
    case s:
        std::cout << "s";
        break;
    case d:
        std::cout << "d";
        break;
    }
}


Eval calculatePos(int board[4][4], int depth) {
    //int board_cp[4][4];
    //for (int z = 0; z < 4; ++z)
    //    std::copy(std::begin(board[z]), std::end(board[z]), std::begin(board_cp[z]));
    Eval Evaluation(rand());
    Evaluation.move = Move(rand() % 4);
    return Evaluation;
}


