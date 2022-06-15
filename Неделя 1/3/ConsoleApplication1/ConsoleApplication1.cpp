#include <iostream>
#include <cmath>
//2j

int main()
{
    int a, b, c;

    std::cout << "Enter a, b c:\n";
    std::cin >> a >> b >> c;

    std::cout << "1) " << (a + b + c) / 3 << std::endl;

    std::cout << "2) " << 2 * (a + c) - 3 * b << std::endl;
    
    return 0;
}
