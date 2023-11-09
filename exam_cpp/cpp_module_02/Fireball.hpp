#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball(void);
		Fireball(Fireball const & rhs);
		Fireball &	operator=(Fireball const & rhs);
		~Fireball(void);

		ASpell*	clone(void) const;
};

#endif