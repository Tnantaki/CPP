#ifndef SpellBook_HPP
# define SpellBook_HPP

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
	private:
		std::map<std::string, ASpell*>	_spells;
		SpellBook(SpellBook const & rhs);
		SpellBook &	operator=(SpellBook const & rhs);
	public:
		SpellBook(void);
		~SpellBook(void);

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string const & spellName);
		ASpell*	createSpell(std::string const & spellName);
};

#endif