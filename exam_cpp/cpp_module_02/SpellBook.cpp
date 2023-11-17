#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void	SpellBook::learnSpell(ASpell* spell) {
	if (spell) {
		_books[spell->getName()] = spell;
	}
}

void	SpellBook::forgetSpell(std::string spellName) {
	std::map<std::string, ASpell*>::iterator	it;

	it = _books.find(spellName);
	if (it != _books.end())
		_books.erase(it);
}

ASpell*	SpellBook::createSpell(std::string spellName) {
	std::map<std::string, ASpell*>::iterator	it;

	it = _books.find(spellName);
	if (it != _books.end())
		return it->second;
	return NULL;
}