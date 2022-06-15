#include <iostream>
//13

int main()
{
    float cookies, candies;
    
    std::cout << "1kg cookies = ";
    std::cin >> cookies;

    std::cout << "1kg candies = ";
    std::cin >> candies;

    cookies /= 10;//переводим в граммы
    candies /= 10;

    std::cout << "\na)\n300g candies = " << candies * 3 << "\n400g cookies = " << cookies * 4 << std::endl;

    std::cout << "\nb)\n2kg cookies = " << cookies * 20 << "\n1kg 800g candies = " << cookies * 18 << std::endl;

    return 0;
}
