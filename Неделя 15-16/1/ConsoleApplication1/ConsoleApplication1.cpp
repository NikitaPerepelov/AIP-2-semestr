#include <iostream>
#include <array>
//1

int main()
{

    std::array <std::array<int, 5>, 5> M;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            M[i][j] = rand() % 201 - 100;
            std::cout << M[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    int min = M[0][0], minStr = 1;

    for (int i = 1; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (M[i][j] < min)
            {
                min = M[i][j];
                minStr = i;
            }

    for (int j = 0; j < 5; j++)
        M[minStr][j] = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            std::cout << M[i][j] << ' ';
        std::cout << std::endl;
    }

    getchar();

    return 0;
}