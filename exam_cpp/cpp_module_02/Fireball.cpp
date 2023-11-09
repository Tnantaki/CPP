#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp") {}

Fireball::Fireball(Fireball const & rhs) : ASpell(rhs) {}

Fireball&	Fireball::operator=(Fireball const & rhs)
{
	if (this != &rhs)
		ASpell::operator=(rhs);
	return *this;
}

Fireball::~Fireball(void) {}

ASpell*	Fireball::clone() const
{
	return new Fireball;
}