#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include "ASpell.hpp"

class Fireball : public ASpell
{
public:
	Fireball();
	Fireball(Fireball const & other);
	Fireball&	operator=(Fireball const & other);
	~Fireball();

	ASpell*	clone() const;
};

#endif