#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
// * void learnTargetType(ATarget*), teaches a target to the generator
// * void forgetTargetType(string const &), that makes the generator forget a
//   target type if it's known
// * ATarget* createTarget(string const &), that creates a target of the
//   specified type
class TargetGenerator
{
private:
	ATarget*	target[2];

	TargetGenerator(TargetGenerator const & other);
	TargetGenerator&	operator=(TargetGenerator const & other);
public:
	TargetGenerator();
	~TargetGenerator();

	void	learnTargetType(ATarget* Target);
	void	forgetTargetType(std::string const & Type);
	ATarget*	createTarget(std::string const & Target);
};

#endif