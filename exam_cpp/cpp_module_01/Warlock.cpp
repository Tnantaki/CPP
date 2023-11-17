#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title)
: _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string	Warlock::getName() const {
	return _name;
}

const std::string	Warlock::getTitle() const {
	return _title;
}

void	Warlock::setTitle(const std::string & title) {
	_title = title;
}

void	Warlock::introduce(void) const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell) {
	if (spell) {
		_spells[spell->getName()] = spell;
	}
}

void	Warlock::forgetSpell(std::string spellName) {
	std::map<std::string, ASpell*>::iterator	it;

	it = _spells.find(spellName);
	if (it != _spells.end())
		_spells.erase(it);
}

void	Warlock::launchSpell(std::string spellName, ATarget & target) {
	std::map<std::string, ASpell*>::iterator	it;

	it = _spells.find(spellName);
	if (it != _spells.end())
		it->second->launch(target);
}