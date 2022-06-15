#include <iostream>
//3Г

int main()
{
    float x, y;

    std::cout << "X = ";
    std::cin >> x;

    std::cout << "Y = ";
    std::cin >> y;

    float R1 = sqrt(pow(x, 2) + pow(y, 2)) <= 1;

    float R2 = sqrt(pow(x, 2) + pow(y, 2)) >= 0.3;

    if (x >= 0 && R1 && (y <= 0 || R2))
        std::cout << "Hit";
    else
        std::cout << "loss";

    return 0;
}
