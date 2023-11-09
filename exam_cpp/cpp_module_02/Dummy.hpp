#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy(void);
		Dummy(Dummy const & rhs);
		Dummy&	operator=(Dummy const & rhs);
		~Dummy(void);

		ATarget*	clone(void) const;
};

#endif