#include <iostream>
//1c

int main()
{
    int x;

    std::cout << "X = ";
    std::cin >> x;

    if (x > 0)
        std::cout << "y = " << 1.5 * x + 5 << std::endl;
    else if (x < 0)
        std::cout << "y = " << 2 * abs(x + 4) - 6 << std::endl;
    else std::cout << "y = -2" << std::endl;

    return 0;
}
