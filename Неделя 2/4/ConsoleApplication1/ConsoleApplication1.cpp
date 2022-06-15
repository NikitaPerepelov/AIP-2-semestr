#include <iostream>
#include <cmath>
//8D

int main()
{
    float x = -2.34;

    std::cout << (abs(x - 5) - sin(x)) / 3 + sqrt(pow(x, 2) + 2014)* cos(2 * x) - 3 << std::endl;

    return 0;
}
