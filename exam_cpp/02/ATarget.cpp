#include "ATarget.hpp"

ATarget::ATarget(std::string Type) : type(Type) {}

ATarget::ATarget(ATarget const & other) : type(other.type) {}

ATarget&	ATarget::operator=(ATarget const & other)
{
	if (this != & other)
		type = other.type;
	return *this;
}

ATarget::~ATarget() {}

// Member Function
void	ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}

