#include <iostream>
#include <cmath>
//2j

int main()
{
    int a, b;

    std::cout << "Enter a, b :";
    std::cin >> a >> b;

    std::cout << "S = " << a * b * 3.14 << std::endl;

    std::cout << "P = " <<  2 * 3.14 * sqrt((pow(a,2) + pow(b,2)) / 2) << std::endl;
    
    return 0;
}
