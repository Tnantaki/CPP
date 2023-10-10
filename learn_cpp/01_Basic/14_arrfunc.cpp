#include <iostream>
//Pass array to function
double	GetTotal(double prices[], int size);

int	main(void)
{
	double	prices[] = {20, 30, 40, 50.5};
	int	size;
	size = sizeof(prices) / sizeof(prices[0]);
	double	total = GetTotal(prices, size);
	std::cout << "Total :" << total << "$" << std::endl;
	return (0);
}

double	GetTotal(double prices[], int size)
{
	double	total;

	total = 0;
	for (int i = 0; i < size; i++)
		total += prices[i];
	return (total);
}

