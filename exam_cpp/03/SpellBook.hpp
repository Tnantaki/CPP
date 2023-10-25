#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"

class SpellBook
{
private:
	ASpell*	spell[3];
	SpellBook(SpellBook const & other);
	SpellBook&	operator=(SpellBook const & other);
public:
	//coplien form
	SpellBook();
	~SpellBook();

	void	learnSpell(ASpell* Spell);
	void	forgetSpell(std::string const & SpellName);
	ASpell*	createSpell(std::string const & SpellName);
};

#endif