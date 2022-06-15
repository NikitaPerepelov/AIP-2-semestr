#include <iostream>
#include <array>
//2 a

int main()
{
	srand(0);

	std::array<int, 20> M;

	for (int i = 0; i < 20; i++)
		M[i] = rand() % 21;

	int sum = 0;

	for (int i = 0; i < 20; i++)
		if (M[i] > 5)
			sum += M[i];

	std::cout << "amount > 5 = " << sum;

	sum = 0;

	for (int i = 0; i < 20; i++)
		if (M[i] < 7)
			sum += M[i];

	std::cout << "\namount < 7 = " << sum;

	sum = 0;

	for (int i = 0; i < 20; i++)
		if (M[i] > 3)
			sum += M[i];

	std::cout << "\namount > 3 = " << sum;

	return 0;
}
