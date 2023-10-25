#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
	for (int i = 0; i < 2; i++)
		target[i] = NULL;
}

TargetGenerator::TargetGenerator(TargetGenerator const & other)
{
	for (int i = 0; i < 2; i++)
		target[i] = other.target[i];
}

TargetGenerator&	TargetGenerator::operator=(TargetGenerator const & other)
{
	if (this != & other)
	{
		for (int i = 0; i < 2; i++)
		{
			if (target[i])
			{
				delete target[i];
				target[i] = NULL;
			}
		}
		for (int i = 0; i < 3; i++)
			target[i] = other.target[i];
	}
	return *this;
}

TargetGenerator::~TargetGenerator()
{
	for (int i = 0; i < 2; i++)
	{
		std::cout << target[i]->getType() << std::endl;
		if (target[i] != NULL)
		{
			delete target[i];
			target[i] = NULL;
		}
	}
}

// * void learnTargetType(ATarget*), teaches a target to the generator
// * void forgetTargetType(string const &), that makes the generator forget a
//   target type if it's known
// * ATarget* createTarget(string const &), that creates a target of the
//   specified type

void	TargetGenerator::learnTargetType(ATarget* Target)
{
  std::cout << "gettype: " <<  Target->getType() << std::endl;
	if (Target->getType() == "Target Practice Dummy")
	{
		if (target[0] == NULL)
			target[0] = Target;
	}
	else if (Target->getType() == "Inconspicuous Red-brick Wall")
	{
		if (target[1] == NULL)
		{
			std::cout << "Hello" << std::endl;
			target[1] = Target;
			std::cout << "chekc" << target[1]->getType() << std::endl;

		}
	}
	return;
}
void	TargetGenerator::forgetTargetType(std::string const & Type)
{
	if (Type == "Target Practice Dummy")
	{
		if (target[0] != NULL)
			delete target[0];
	}
	else if (Type == "Inconspicuous Red-brick Wal")
	{
		if (target[1] != NULL)
			delete target[1];
	}
}
ATarget*	TargetGenerator::createTarget(std::string const & Target)
{
	if (Target == "Target Practice Dummy")
	{
		if (target[0])
			return target[0];
	}
	else if (Target == "Inconspicuous Red-brick Wall")
	{
		if (target[1])
			return target[1];
	}
	return NULL;
}
