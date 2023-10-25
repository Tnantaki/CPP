#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
	Polymorph();
	Polymorph(Polymorph const & other);
	Polymorph&	operator=(Polymorph const & other);
	~Polymorph();

	ASpell*	clone() const;
};

#endif