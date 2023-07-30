#include <iostream>
//fill() = fill(begin, end, value);

const int SIZE = 9;

int	main(void)
{
	std::string names[SIZE];

	fill(names, names + (SIZE / 3), "May");
	fill(names + (SIZE / 3), names + (SIZE / 3) * 2, "Mos");
	fill(names + (SIZE / 3) * 2, names + SIZE, "Mac");
	for (int i = 0; i < SIZE; i++)
		std::cout << names[i] << std::endl;
	return (0);
}
