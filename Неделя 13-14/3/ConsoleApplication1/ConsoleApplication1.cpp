#include <iostream>
#include <array>
//12 

int main()
{
	srand(0);

	std::array<int, 20> M;

	for (int i = 0; i < 20; i++)
	{
		M[i] = rand() % 21 - 10;

		std::cout << M[i] << ' ';
	}
	
	std::cout << std::endl;

	for (int i = 0; i < 20; i++)
	{
		if (M[i] % 2 == 0)
			M[i] += 3;
		else
			M[i] *= 2;

		std::cout << M[i] << ' ';
	}

	return 0;
}
