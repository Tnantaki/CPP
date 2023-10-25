#include "ASpell.hpp"

ASpell::ASpell(std::string Name, std::string Effects) : name(Name), effects(Effects) {}

ASpell::ASpell(ASpell const & other) : name(other.name), effects(other.effects) {}

ASpell&	ASpell::operator=(ASpell const & other)
{
	if (this != & other)
	{
		name = other.name;
		effects = other.effects;
	}
	return *this;
}

ASpell::~ASpell() {}

// Member Function
void	ASpell::launch(ATarget const & target) const
{
	target.getHitBySpell(*this);
}