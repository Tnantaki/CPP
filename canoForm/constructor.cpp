#include "canoForm.hpp"

// // create by assign each value
// Student::Student(void)
// {
// 	name = strdup("N/A");
// 	age = 0;
// 	grade = 0.00f;
// 	std::cout << "Default Constructor Called" << std::endl;
// }

// create by initialization list
Student::Student(void) : name(strdup("N/A")), age(0), grade(0.00f)
{
	std::cout << "Default Constructor Called" << std::endl;
}

Student::Student(const char* Name, int Age, float Grade)
: age(Age), grade(Grade)
{
	name = strdup(Name);
	std::cout << "Parametric Constructor Called" << std::endl;
}

// int	main(void)
// {
// 	Student	A; // Default Contructor
// 	Student	B("Mos", 18, 2.50); // Parametric Constructor

// 	std::cout << A.getName() << ", " << A.getAge() << std::endl;
// 	std::cout << B.getName() << ", " << B.getAge() << std::endl;
// }
