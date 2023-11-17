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

		TargetGenerator(TargetGenerator const& rhs);
		TargetGenerator&	operator=(TargetGenerator const& rhs);
	public:
		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget* target);
		void	forgetTargetType(std::string targetName);
		ATarget*	createTarget(std::string targetName);
};

#endif