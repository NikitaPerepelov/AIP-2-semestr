#include <iostream>
#include <array>
//1 b   


int main()
{
	srand(0);

	std::array<int, 20> M;

	for (int i = 0; i < 20; i++)
		M[i] = rand() % 11 + 10;

	for (int i = 0; i < 20; i++)
		std::cout << M[i] << ' ';

	return 0;
}
