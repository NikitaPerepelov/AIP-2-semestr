#include <iostream>
//3j

int main()
{
	float X, n, y;

	std::cin >> n >> X;

	y = X;

	for (int i = 2; i <= n; i++)
		y += pow(X, i) / (i + 1);

	std::cout << y << std::endl;

	return 0;
}
