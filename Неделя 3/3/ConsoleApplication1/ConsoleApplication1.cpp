#include <iostream>
#include <cmath>
//2 N

int main()
{
    float N, min, max;

    std::cout << "Step : ";
    std::cin >> N;

    std::cout << "Start : ";
    std::cin >> min;

    std::cout << "End :";
    std::cin >> max;

    for (int i = min; i < max; i += N)
        std::cout << sqrt(2 + 3 / i) + 72 * i + tan(4 * i + 31) << std::endl;
}
