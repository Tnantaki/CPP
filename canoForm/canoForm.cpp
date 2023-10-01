#include "canoForm.hpp"

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

Student::Student(Student const& other)
: age(other.age), grade(other.grade)
{
	// name = other.name // this is shallow copy
	// name = strdup(other.name); // for deep copy
	*this = other;
	std::cout << "Copy Constructor Called" << std::endl;
}

Student&	Student::operator=(Student const& rhs)
{
	if (this != &rhs)
	{
		// delete [] name;
		std::cout << "Copy Assignment Operator Called" << std::endl;
		name = strdup(rhs.name);
		age = rhs.age;
		grade = rhs.grade;
	}
	return *this;
}

Student::~Student(void)
{
	delete name; // deallocate memory
	std::cout << "Destructor Called" << std::endl;
}