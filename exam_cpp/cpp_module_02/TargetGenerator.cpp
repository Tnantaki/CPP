#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator(void) {
	std::map<std::string, ATarget*>::iterator	it;

	for (it = _targets.begin(); it != _targets.end(); it++)
		delete it->second;
}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		_targets[target->getType()] = target->clone();
}

void	TargetGenerator::forgetTargetType(std::string const & type)
{
	std::map<std::string, ATarget*>::iterator	it;

	it = _targets.find(type);
	if (it != _targets.end())
	{
		delete it->second;
		_targets.erase(it);
	}

}

ATarget*	TargetGenerator::createTarget(std::string const & type)
{
	std::map<std::string, ATarget*>::iterator	it;

	it = _targets.find(type);
	if (it != _targets.end())
		return it->second->clone();
	return NULL;

}
