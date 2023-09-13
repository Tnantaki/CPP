#include "canoForm.hpp"

Student&	Student::operator=(Student const& rhs)
{
	if (this != &rhs)
	{
		delete [] name;
		std::cout << "Copy Assignment Operator Called" << std::endl;
		name = strdup(rhs.name);
		age = rhs.age;
		grade = rhs.grade;
	}
	return *this;
}

int	main(void)
{
	Student	A("Mos", 18, 2.50); // create object
	Student B = Student("Mac", 15, 3.00); // create object

	std::cout << A.getName() << ", " << A.getAge() << std::endl;
	std::cout << B.getName() << ", " << B.getAge() << std::endl;

	B = A; // Copy Assignment Operator Called cause B was existed

	std::cout << B.getName() << ", " << B.getAge() << std::endl;
}
