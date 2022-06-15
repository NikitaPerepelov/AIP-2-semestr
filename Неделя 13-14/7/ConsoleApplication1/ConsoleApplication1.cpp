#include <iostream>
#include <array>
//16

struct passenger
{
	float weight;
	int numberOfItems;
};

int main()
{
	srand(0);

	std::array<passenger, 20> N;

	for (int i = 0; i < 20; i++)
	{
		N[i].numberOfItems = rand() % 21 - 1;
		N[i].weight = rand() % 101 - 1;
	}

	passenger a = N[0], b = N[0], c = N[0];

	std::cout << "weight\tnumberOfItems" << std::endl;

	for (int i = 1; i < 20; i++)
	{
		std::cout << N[i].weight << '\t' << N[i].numberOfItems << std::endl;

		if (a.weight < N[i].weight && a.numberOfItems < N[i].numberOfItems)
		{
			a.numberOfItems = N[i].numberOfItems;
			a.weight = N[i].weight;
		}

		if (b.weight > N[i].weight && b.numberOfItems < N[i].numberOfItems)
		{
			b.numberOfItems = N[i].numberOfItems;
			b.weight = N[i].weight;
		}

		if (c.weight > N[i].weight && c.numberOfItems > N[i].numberOfItems)
		{
			c.numberOfItems = N[i].numberOfItems;
			c.weight = N[i].weight;
		}
	}

	std::cout << std::endl;

	std::cout << "\na) " << a.weight << '\t' << a.numberOfItems << std::endl;

	std::cout << "b) " << b.weight << '\t' << b.numberOfItems << std::endl;

	std::cout << "c) " << c.weight << '\t' << c.numberOfItems << std::endl;

	return 0;
}
