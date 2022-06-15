#include <iostream>
#include <array>
//6

int main()
{

    std::array <std::array<int, 5>, 5> M;

    std::array<int, 5> m;

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

    int max;
   
    for (int i = 0; i < 5; i++)
    {
        max = M[i][0];

        for (int j = 1; j < 5; j++)
            if (M[i][j] > max)
                max = M[i][j];
        
        m[i] = max;
    }

    for (int i = 0; i < 5; i++)
        std::cout << m[i] << ' ';

    std::cout << std::endl;

    getchar();

    return 0;
}