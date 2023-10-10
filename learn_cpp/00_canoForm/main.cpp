#include "canoForm.hpp"

int	main(void)
{
	Student	s0;								// Default Constructor
	Student	s1 = Student("Mark", 20, 3);	// Parametric Constructor
	Student	s2("Mos", 22, 2.5);				// Parametric Constructor
	std::cout << BLUE << "-------------------" << RESET << std::endl;
	Student	s3 = s1;						// Copy Constructor
	Student	s4(s2);							// Copy Constructor
	std::cout << BLUE << "-------------------" << RESET << std::endl;
	s3 = s2;								// Copy Assignment Operator
	std::cout << BLUE << "-------------------" << RESET << std::endl;
	return 0;
}