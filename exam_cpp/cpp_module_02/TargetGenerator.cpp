#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget* target) {
	if (target) {
		_targets[target->getType()] = target;
	}
}

void	TargetGenerator::forgetTargetType(std::string targetName) {
	std::map<std::string, ATarget*>::iterator	it;

	it = _targets.find(targetName);
	if (it != _targets.end())
		_targets.erase(it);
}

ATarget*	TargetGenerator::createTarget(std::string targetName) {
	std::map<std::string, ATarget*>::iterator	it;

	it = _targets.find(targetName);
	if (it != _targets.end())
		return it->second;
	return NULL;
}