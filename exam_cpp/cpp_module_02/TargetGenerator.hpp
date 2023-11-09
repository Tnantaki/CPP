#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <string>
#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	private:
		std::map<std::string, ATarget*>	_targets;

		TargetGenerator(TargetGenerator const & rhs);
		TargetGenerator &	operator=(TargetGenerator const & rhs);
	public:
		TargetGenerator(void);
		~TargetGenerator(void);

		void	learnTargetType(ATarget* target);
		void	forgetTargetType(std::string const & type);
		ATarget*	createTarget(std::string const & type);
};

#endif