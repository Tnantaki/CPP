#include <iostream>
// new operator to allocate memory in the heap
// Syntax of new operator
// type variable = new type[size];

int	main(void)
{
	int		*num;

	num = new int;
	*num = 20;
	std::cout << *num << std::endl;
	delete num;

	int		Size;
	char	*PtrGrade;

	std::cout << "How many your Grades to enter in : ";
	std::cin >> Size;

	PtrGrade = new char[Size];
	for (int i = 0; i < Size; i++)
	{
		std::cout << "Enter Grade #" << i + 1 << ": ";
		// std::cin >> PtrGrade[i];
		std::cin >> PtrGrade + i;
	}
	for (int i = 0; i < Size; i++)
		std::cout << PtrGrade[i] << " ";
	std::cout << std::endl;
	delete[] PtrGrade;
	return (0);
}
