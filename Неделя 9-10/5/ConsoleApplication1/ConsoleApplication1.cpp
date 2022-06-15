#include <iostream>
//13 D

int main()
{

	int i, max, t;

	std::cout << "initial value = ";
	std::cin >> i;

	std::cout << "final value = ";
	std::cin >> max;

	std::cout << "tab step = ";
	std::cin >> t;

	for (; i < max; i += t)
	{
		if (i > 1)
			std::cout << "y = " << 3 * i - 7;
		else if (i < 1)
			std::cout << "y = " << 3 * abs(i + 2) - 7;
		else
			std::cout << "y = 3";

		std::cout << std::endl;
	}

	return 0;
}