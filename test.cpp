#include <iostream>
#include <cstdlib>

template<typename T, typename U>
void	iter(T* array, size_t length, void	(*func)(U&))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

template<typename T>
void	iter(T* array, size_t length, void	(*func)(T&))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

template<typename T>
void	print(T& value)
{
	std::cout << value << std::endl;
}

template<typename T>
void	increateNum(T& value)
{
	value += 1;
}

int	main()
{
	const int		arrInt[] = {10, 20, 30, 40};
	// char	arrChar[] = {'a', 'b', 'c', 'd'};
	// float	arrFloat[] = {1.11f, 2.22f, 3.33f, 4.44f};

	size_t const	amountInt = (sizeof(arrInt) / sizeof(int));
	// size_t const	amountChar = (sizeof(arrChar) / sizeof(char));
	// size_t const	amountFloat = (sizeof(arrFloat) / sizeof(float));

	iter(arrInt, amountInt, print<const int>);
}