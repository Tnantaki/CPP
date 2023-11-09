#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		ATarget(void);
	protected:
		std::string	_type;
	public:
		ATarget(std::string const & type);
		ATarget(ATarget const & rhs);
		ATarget &	operator=(ATarget const & rhs);
		virtual ~ATarget(void);

		std::string const &	getType(void) const;
		void	getHitBySpell(ASpell const & spell) const;
		virtual ATarget*	clone(void) const = 0;
};

#endif