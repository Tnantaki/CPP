#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
		Fwoosh(Fwoosh const& rhs);
		Fwoosh&	operator=(Fwoosh const& rhs);
		~Fwoosh();

		ASpell*	clone() const;
};

#endif