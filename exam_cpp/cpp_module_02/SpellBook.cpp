#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook(void) {}

void	SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
	{
		_spells[spell->getName()] = spell;
	}
}

void	SpellBook::forgetSpell(std::string const & spellName)
{
	std::map<std::string, ASpell*>::iterator	it;

	it = _spells.find(spellName);
	if (it != _spells.end())
	{
		delete it->second;
		_spells.erase(it);
	}
}

ASpell*	SpellBook::createSpell(std::string const & spellName)
{
	std::map<std::string, ASpell*>::iterator	it;

	it = _spells.find(spellName);
	if (it != _spells.end())
		return it->second->clone();
	return NULL;
}