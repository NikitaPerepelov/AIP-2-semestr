#include <iostream>
#include <array>
//11

int main()
{
	srand(5);

	std::array<int, 20> M;

	for (int i = 0; i < 20; i++)
		M[i] = rand() % 21 - 10;
	
	float average = 0;

	for (int i = 0; i < 20; i++)
		average += M[i];
	
	average /= 20;

	for (int i = 0; i < 20; i++)
		if (average > M[i])
			std::cout << M[i] << ' ';

	return 0;
}
