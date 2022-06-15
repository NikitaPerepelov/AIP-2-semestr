#include <iostream>
//J

int main()
{
    int nap;
    float x;

    std::cout << "1) грамм на литр\n"
        "2) грамм на кубический дециметр\n"
        "3)'градус в минуту' в 'радиан в минуту'\n"
        "Введите Направление Перевода: ";
    std::cin >> nap;

    std::cout << "Введите чесло: ";
    std::cin >> x;

    std::cout << "Результат Перевода: ";

    switch (nap)
    {
    case 1:
        std::cout << x / 1000;
        break;
    case 2:
        std::cout << x * 1000;
        break;
    case 3:
        std::cout << x * 2.1433;
        break;
    default:
        std::cout << "Error";
        break;
    }

    std::cout << std::endl;

    return 0;
}
