#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
protected:
	std::string	type;

	//coplien form
	ATarget() {}
public:
	//coplien form
	ATarget(std::string Type);
	ATarget(ATarget const & other);
	ATarget&	operator=(ATarget const & other);
	virtual ~ATarget();

	//getter
	std::string	getType() const {return type;}

	//member function
	void	getHitBySpell(ASpell const & spell) const;

	//pure virtual function
	virtual ATarget*	clone() const = 0;
};

#endif