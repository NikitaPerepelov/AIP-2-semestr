#include <iostream>
#include <cmath>
//2 J

int main()
{
    float N, min, max;

    std::cout << "Step : ";
    std::cin >> N;

    std::cout << "Start : ";
    std::cin >> min;

    std::cout << "End : ";
    std::cin >> max;

    for (int i = min; i < max; i += N)
        std::cout << pow(5 + 4 * i, 2) + 8* i + cos(12 * i + 91) << std::endl;
}
