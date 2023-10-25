#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::Fwoosh(Fwoosh const & other) : ASpell(other) {}

Fwoosh&	Fwoosh::operator=(Fwoosh const & other)
{
	if (this != &other)
	{
		ASpell::operator=(other);
	}
	return *this;
}

Fwoosh::~Fwoosh() {}

ASpell*	Fwoosh::clone() const
{
	ASpell*	var = new Fwoosh;
	return var;
}
