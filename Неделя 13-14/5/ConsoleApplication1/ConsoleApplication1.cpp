#include <iostream>
#include <array>
//5

int main()
{
	srand(5);

	std::array<int, 20> M;

	for (int i = 0; i < 20; i++)
	{
		M[i] = rand() % 21 - 10;
		std::cout << M[i] << ' ';
	}

	std::cout << std::endl;

	float min = M[0], max = M[0], Nmin, Nmax;

	for (int i = 1; i < 20; i++)
	{
		if (M[i] < min)
		{
			min = M[i];
			Nmin = i;
		}
		if (M[i] > max)
		{
			max = M[i];
			Nmax = i;
		}
	}

	std::cout << "Max = " << max << "\nNamber Max = " << Nmax << std::endl;

	std::cout << "Min = " << min << "\nNamber Min = " << Nmin << std::endl;

	return 0;
}
