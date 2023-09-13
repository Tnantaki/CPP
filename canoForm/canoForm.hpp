#ifndef CANOFORM_HPP
# define CANOFORM_HPP

#include <iostream>
#include <cstring>

class Student
{
private:
	char*	name;
	int		age;
	float	grade;
public:
	Student(void); // Default Constructor
	Student(const char* Name, int Age, float Grade); // Parametric Constructor
	Student(Student const& other); // Copy Constructor
	Student&	operator=(Student const& rhs);	//Copy assignment operator
	~Student(void); // Destructor

	char*	getName(void) const {return name;} //member function
	int		getAge(void) const {return age;} //member function
	float	getGrade(void) const {return grade;} //member function
};

#endif

	// Student(std::string name, int age, float grade); // Parametric Constructor