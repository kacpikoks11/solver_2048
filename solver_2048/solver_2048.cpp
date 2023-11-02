#include <iostream>
#include <string>
#include <ctime>
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
    switch (rand()%4) {
    case 0:
        std::cout << "w";
        break;
    case 1:
        std::cout << "a";
        break;
    case 2:
        std::cout << "s";
        break;
    case 3:
        std::cout << "d";
        break;
    }
}
