#include "canoForm.hpp"

// Default Constructor is Constructor that didn't take any parameter
// You can put Default Constructor in Private scope for not allow user use it.
Student::Student(void) : name(strdup("N/A")), age(0), grade(0.00f)
{
	std::cout << YELLOW << "Default Constructor Called" << RESET << std::endl;
}

// Parametric Constructor is Constructor that take parameter and initiate them to attribute.
Student::Student(const char* Name, int Age, float Grade) : name(strdup(Name)), age(Age), grade(Grade)
{
	std::cout << YELLOW << "Parametric Constructor Called" << RESET << std::endl;
}

// Copy Constructor will be called in case you declare object by copy value from instance (an object that was created)
Student::Student(Student const& other) : age(other.age), grade(other.grade)
{
	// name = other.name // this is shallow copy
	name = strdup(other.name); // for deep copy
	std::cout << YELLOW << "Copy Constructor Called" << RESET << std::endl;
}

// Copy Assignment Operator will be called in case you have 2 instaces
// and you want to copy one of them to another one
Student&	Student::operator=(Student const& rhs)
{
	if (this != &rhs)
	{
		delete [] name;
		name = strdup(rhs.name);
		age = rhs.age;
		grade = rhs.grade;
		std::cout << YELLOW << "Copy Assignment Operator Called" << RESET << std::endl;
	}
	return *this;
}

// Destructor will be called automatically when object decay(no longer exist)
Student::~Student(void)
{
	delete name; // deallocate memory
	std::cout << YELLOW << "Destructor Called" << RESET << std::endl;
}