#ifndef DERIVED_HPP
# define DERIVED_HPP

#include "Base.hpp"

# define BLACK	"\e[0;30m"
# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define PURPLE	"\e[0;35m"
# define CYAN	"\e[0;36m"
# define WHITE	"\e[0;37m"
# define RESET	"\e[0m"

class Derived : public Base
{
	private:
		// char*	name;
		// int		age;
		// float	grade;
	public:
		Derived(void) {
			std::cout << YELLOW << "[Derived]Default Constructor Called" << RESET << std::endl;
		}
		// Derived(Derived const& other) : age(other.age), grade(other.grade) {
		// 	name = strdup(other.name);
		// 	std::cout << YELLOW << "[Derived]Copy Constructor Called" << RESET << std::endl;
		// }
		// Derived&	operator=(Derived const& rhs) {
		// 	if (this != &rhs)
		// 	{
		// 		delete [] name;
		// 		std::cout << YELLOW << "[Derived]Copy Assignment Operator Called" << RESET << std::endl;
		// 		name = strdup(rhs.name);
		// 		age = rhs.age;
		// 		grade = rhs.grade;
		// 	}
		// 	return *this;
		// }
		~Derived(void) {
			std::cout << YELLOW << "[Derived]Destructor Called" << RESET << std::endl;
		}

		// char*	getName(void) const {return name;} //member function
		// int		getAge(void) const {return age;} //member function
		// float	getGrade(void) const {return grade;} //member function
};

#endif