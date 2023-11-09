#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh(void);
		Fwoosh(Fwoosh const & rhs);
		Fwoosh &	operator=(Fwoosh const & rhs);
		~Fwoosh(void);

		ASpell*	clone(void) const;
};

#endif