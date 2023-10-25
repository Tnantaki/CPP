#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}

Polymorph::Polymorph(Polymorph const & other) : ASpell(other) {}

Polymorph&	Polymorph::operator=(Polymorph const & other)
{
	if (this != &other)
	{
		ASpell::operator=(other);
	}
	return *this;
}

Polymorph::~Polymorph() {}

ASpell*	Polymorph::clone() const
{
	ASpell*	var = new Polymorph;
	return var;
}
