#include "ASpell.hpp"

ASpell::ASpell(std::string const & name, std::string const & effect)
: _name(name), _effects(effect) {}

ASpell::ASpell(ASpell const & rhs)
: _name(rhs._name), _effects(rhs._effects) {}

ASpell&	ASpell::operator=(ASpell const & rhs) {
	if (this != &rhs) {
		_name = rhs._name;
		_effects = rhs._effects;
	}
	return (*this);
}

ASpell::~ASpell() {}

const std::string&	ASpell::getName() const {
	return _name;
}

const std::string&	ASpell::getEffects() const {
	return _effects;
}

void	ASpell::launch(ATarget const & target) const {
	target.getHitBySpell(*this);
}
