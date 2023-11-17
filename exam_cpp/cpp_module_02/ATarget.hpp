#ifndef ATarget_HPP
# define ATarget_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		ATarget();
	protected:
		std::string	_type;
	public:
		ATarget(std::string const & type);
		ATarget(ATarget const & rhs);
		ATarget&	operator=(ATarget const & rhs);
		virtual ~ATarget();

		std::string const&	getType() const;
		void	getHitBySpell(ASpell const & spell) const;
		virtual ATarget*	clone() const = 0;
};

#endif