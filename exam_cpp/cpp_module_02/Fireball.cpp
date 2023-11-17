#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}

Fireball::Fireball(Fireball const & rhs) : ASpell(rhs) {}

Fireball&	Fireball::operator=(Fireball const & rhs) {
	if (this != &rhs)
		ASpell::operator=(rhs);
	return (*this);
}

Fireball::~Fireball() {}

ASpell*	Fireball::clone() const {
	return new Fireball;
}
