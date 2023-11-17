#ifndef ASpell_HPP
# define ASpell_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		ASpell();
	protected:
		std::string	_name;
		std::string	_effects;
	public:
		ASpell(std::string const & name, std::string const & effect);
		ASpell(ASpell const& rhs);
		ASpell&	operator=(ASpell const& rhs);
		virtual ~ASpell();

		std::string const&	getName() const;
		std::string const&	getEffects() const;
		void	launch(ATarget const & target) const;
		virtual ASpell*	clone() const = 0;
};

#endif