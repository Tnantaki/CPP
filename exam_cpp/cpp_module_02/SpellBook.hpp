#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
	private:
		std::map<std::string, ASpell*>	_books;

		SpellBook(SpellBook const& rhs);
		SpellBook&	operator=(SpellBook const& rhs);
	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spellName);
		ASpell*	createSpell(std::string spellName);
};

#endif