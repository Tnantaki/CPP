#include "Warlock.hpp"

Warlock::Warlock(std::string const & name, std::string const & title)
: _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::map<std::string, ASpell*>::iterator	it;

	for (it = _spells.begin(); it != _spells.end(); it++)
		delete it->second;
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const &	Warlock::getName() const
{
	return _name;
}
std::string const &	Warlock::getTitle() const
{
	return _title;
}

void	Warlock::setTitle(std::string const & title)
{
	_title = title;
}

void	Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell* spell)
{
	if (spell)
		_spells[spell->getName()] = spell->clone();
}

void	Warlock::forgetSpell(std::string spellName)
{
	std::map<std::string, ASpell*>::iterator	it;

	it = _spells.find(spellName);
	if (it != _spells.end())
	{
		delete it->second;
		_spells.erase(it);
	}
}

void	Warlock::launchSpell(std::string spellName, ATarget& target)
{
	std::map<std::string, ASpell*>::iterator	it;

	it = _spells.find(spellName);
	if (it != _spells.end())
		it->second->launch(target);
}