#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::Fwoosh(Fwoosh const & rhs) : ASpell(rhs) {}

Fwoosh&	Fwoosh::operator=(Fwoosh const & rhs) {
	if (this != &rhs)
		ASpell::operator=(rhs);
	return (*this);
}

Fwoosh::~Fwoosh() {}

ASpell*	Fwoosh::clone() const {
	return new Fwoosh;
}
