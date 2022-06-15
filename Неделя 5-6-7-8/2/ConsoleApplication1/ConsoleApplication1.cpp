#include <iostream>
//1j

int main()
{
    int x;

    std::cout << "X = ";
    std::cin >> x;

    if (x > 5)
        std::cout << "y = " << 3 * x - 5 << std::endl;
    else if (x < 5)
        std::cout << "y = " << 2 * abs(x - 2) + 5 << std::endl;
    else std::cout << "y = 10" << std::endl;
    
    return 0;
}
