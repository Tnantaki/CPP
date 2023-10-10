#ifndef CANOFORM_HPP
# define CANOFORM_HPP

#include <iostream>
#include <cstring>

# define BLACK	"\e[0;30m"
# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define PURPLE	"\e[0;35m"
# define CYAN	"\e[0;36m"
# define WHITE	"\e[0;37m"
# define RESET	"\e[0m"

class Student
{
private:
	char*	name;
	int		age;
	float	grade;
public:
	Student(void);										// Default Constructor
	Student(const char* Name, int Age, float Grade);	// Parametric Constructor
	Student(Student const& other);						// Copy Constructor
	Student&	operator=(Student const& rhs);			//Copy assignment operator
	~Student(void);										// Destructor

	char*	getName(void) const {return name;}			//member function
	int		getAge(void) const {return age;}			//member function
	float	getGrade(void) const {return grade;}		//member function
};

#endif
