#include <iostream>
#include <array>
//b

int main()
{
	srand(0);

	std::array<int, 20> M1, M2, M3;

	for (int i = 0; i < 20; i++)
	{
		M1[i] = rand() % 21 - 10;
		std::cout << M1[i] << ' ';
	}

	std::cout << std::endl;

	for (int i = 0; i < 20; i++)
	{
		M2[i] = rand() % 21 - 10;
		std::cout << M2[i] << ' ';
	}

	std::cout << std::endl;

	for (int i = 0; i < 20; i++)
	{
		M3[i] = M2[i] - M1[i];
		std::cout << M3[i] << ' ';
	}

	return 0;
}
