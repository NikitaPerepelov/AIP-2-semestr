#include <iostream>
//8

float RingS(float R1, float R2)
{
	float S1 = R1 * 3.14,
		  S2 = R2 * 3.14;

	return abs(S1 - S2);
}

int main()
{
	float R1, R2;

	std::cin >> R1 >> R2;

	std::cout << "S = " << RingS(R1, R2) << std::endl;

	return 0;
}