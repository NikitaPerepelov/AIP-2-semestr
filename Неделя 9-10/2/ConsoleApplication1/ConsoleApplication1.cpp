#include <iostream>
//11

bool Even(int K)
{
	return (K % 2 == 0) ? true: false;
}

int main()
{
	float K;

	std::cin >> K;
	
	std::cout << Even(K);

	return 0;
}