#include "Polymorph.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter") {}

Polymorph::Polymorph(Polymorph const & rhs) : ASpell(rhs) {}

Polymorph&	Polymorph::operator=(Polymorph const & rhs)
{
	if (this != &rhs)
		ASpell::operator=(rhs);
	return *this;
}

Polymorph::~Polymorph(void) {}

ASpell*	Polymorph::clone() const
{
	return new Polymorph;
}