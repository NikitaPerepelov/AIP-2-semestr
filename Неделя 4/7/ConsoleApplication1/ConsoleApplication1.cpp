#include <iostream>
//3 D

int main()
{
	float X, n, y = 0;

	std::cin >> n >> X;

	for (int i = 1; i <= n; i++)
		y += (i + 2) / ((i * 2 + 5) * i);

	std::cout << y << std::endl;

	return 0;
}
