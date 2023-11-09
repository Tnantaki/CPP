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
	_book.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spellName)
{
	_book.forgetSpell(spellName);
}

void	Warlock::launchSpell(std::string spellName, ATarget& target)
{
	ASpell*	spell = _book.createSpell(spellName);
	if (spell)
	{
		spell->launch(target);
		delete spell;
	}
}