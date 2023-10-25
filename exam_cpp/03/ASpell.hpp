#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
protected:
	std::string	name;
	std::string	effects;
	ASpell() {}
public:
	//coplien form
	ASpell(std::string Name, std::string Effects);
	ASpell(ASpell const & other);
	ASpell&	operator=(ASpell const & other);
	virtual ~ASpell();

	//getter
	std::string	getName() const {return name;}
	std::string	getEffects() const {return effects;}

	void	launch(ATarget const & target) const;

	//pure virtual function
	virtual ASpell*	clone() const = 0;
};

#endif