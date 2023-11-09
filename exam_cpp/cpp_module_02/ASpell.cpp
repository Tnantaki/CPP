#include "ASpell.hpp"

ASpell::ASpell(std::string const & name, std::string const & effects)
: _name(name), _effects(effects) {}

ASpell::ASpell(ASpell const & rhs) : _name(rhs._name), _effects(rhs._effects) {}

ASpell &	ASpell::operator=(ASpell const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_effects = rhs._effects;
	}
	return *this;
}

ASpell::~ASpell(void) {}

std::string	ASpell::getName() const
{
	return _name;
}
std::string	ASpell::getEffects() const
{
	return _effects;
}

void	ASpell::launch(ATarget const & target)
{
	target.getHitBySpell(*this);
}
