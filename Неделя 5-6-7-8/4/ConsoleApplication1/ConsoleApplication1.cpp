#include <iostream>
#include <cmath>
//2A

int main()
{
    float x, y;

    std::cout << "X = ";
    std::cin >> x;

    std::cout << "Y = ";
    std::cin >> y;

    float R = sqrt(pow(x,2) + pow(y,2)) >= 2;

    if (x <= 2 && y <= x && R)
        std::cout << "Hit";
    else
        std::cout << "loss";
    
    return 0;
}
