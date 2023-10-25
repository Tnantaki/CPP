#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}

Fireball::Fireball(Fireball const & other) : ASpell(other) {}

Fireball&	Fireball::operator=(Fireball const & other)
{
	if (this != &other)
	{
		ASpell::operator=(other);
	}
	return *this;
}

Fireball::~Fireball() {}

ASpell*	Fireball::clone() const
{
	return new Fireball;
}
