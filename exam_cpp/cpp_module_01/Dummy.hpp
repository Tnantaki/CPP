#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy();
		Dummy(Dummy const& rhs);
		Dummy&	operator=(Dummy const& rhs);
		~Dummy();

		ATarget*	clone() const;
};

#endif