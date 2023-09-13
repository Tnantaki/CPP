#include "canoForm.hpp"

Student::~Student(void)
{
	delete name; // deallocate memory
	std::cout << "Destructor Called" << std::endl;
}

// int	main(void)
// {
// 	Student	A("Mos", 18, 2.50); // Parametric Constructor

// 	std::cout << A.getName() << ", " << A.getAge() << std::endl;
// }
