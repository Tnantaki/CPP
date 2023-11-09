#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph(void);
		Polymorph(Polymorph const & rhs);
		Polymorph &	operator=(Polymorph const & rhs);
		~Polymorph(void);

		ASpell*	clone(void) const;
};

#endif