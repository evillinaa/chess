#include <iostream>

int main()
{
    char board[] = { 'a', 'b', 'c', 'd', 'e','f','g','h'};
    std::cout << " ";
    for (int i = 0; i < 8; i++)
    {
        std::cout << " " << board[i] << " ";

    }
    std::cout << "\n";
    for (int i = 0; i < 8; i++)
    {
        std::cout << " " << 8 - i << " ";
        for (int j = 0; j < 8; j++)
        {
            std::cout << board[j] << 8 - i << " ";
        }
        std::cout << "\n";
        std::cout << " ";
        for (int j = 0; j < 0; j++)
        {
            std::cout << "-------";
        }
        std::cout << "-" << "\n";
    }
}

