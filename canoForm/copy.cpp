#include "canoForm.hpp"

Student::Student(Student const& other)
: age(other.age), grade(other.grade)
{
	// name = other.name // this is shallow copy
	name = strdup(other.name); // for deep copy
	std::cout << "Copy Constructor Called" << std::endl;
}

// int	main(void)
// {
// 	Student	A("Mos", 18, 2.50); // create object
// 	Student B = A; // Copy Constructor Called cause Object A are existed


// 	std::cout << A.getName() << ", " << A.getAge() << std::endl;
// 	std::cout << B.getName() << ", " << B.getAge() << std::endl;
// }
