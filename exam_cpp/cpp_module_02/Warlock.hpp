#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "Fireball.hpp"
#include "Fwoosh.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"

class Warlock
{
	private:
		std::string	_name;
		std::string	_title;
		SpellBook	_book;

		Warlock();
		Warlock(Warlock const& rhs);
		Warlock&	operator=(Warlock const& rhs);
	public:
		Warlock(std::string const & name, std::string const & title);
		~Warlock();

		std::string const	getName() const;
		std::string const	getTitle() const;
		void	setTitle(const std::string & title);
		void	introduce() const;

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spellName);
		void	launchSpell(std::string spellName, ATarget & target);
};

#endif