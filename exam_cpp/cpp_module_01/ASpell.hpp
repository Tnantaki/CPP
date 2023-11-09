#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		ASpell(void);
	protected:
		std::string	_name;
		std::string	_effects;
	public:
		ASpell(std::string const & name, std::string const & effects);
		ASpell(ASpell const & rhs);
		ASpell &	operator=(ASpell const & rhs);
		virtual ~ASpell(void);

		std::string	getName(void) const;
		std::string	getEffects(void) const;
		void	launch(ATarget const & target);
		virtual ASpell*	clone(void) const = 0;
};

#endif