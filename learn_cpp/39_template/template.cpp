#include <iostream>

// template implement on the complied-time
// we call function that use template is "generic fucntion"
// generic function will be create when be called

template<typename T>
void	print(T value)
{
	std::cout << value << std::endl;
}

// size will be crete as a complied-time
template<int size>
class Array
{
private:
	int	var[size];
public:
	int	getSize() const {return size;}
};

template<typename T, int size>
class Array
{
private:
	T	var[size];
public:
	int		getSize() const {return size;}
	void	addVar(T const value, int index) {var[index] = value;}
	void	display() {for (int i = 0; i < size; i++) {print(var[i]);};}
};

int	main(void)
{
	print(20);					// Implicit instanciation
	print<float>(42.42f);		// Explicit instanciation
	print<std::string>("Hello");

	// Array<20>	obj;
	// std::cout << "size is: " << obj.getSize() << std::endl;

	// Array<std::string, 2>	obj;
	// obj.addVar("Monday", 0);
	// obj.addVar("Tuesday", 1);
	// obj.display();

	return 0;
}