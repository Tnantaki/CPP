#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {}

Dummy::Dummy(Dummy const & other) : ATarget(other) {}

Dummy&	Dummy::operator=(Dummy const & other)
{
	if (this != &other)
		ATarget::operator=(other);
	return *this;
}

Dummy::~Dummy() {}

ATarget*	Dummy::clone() const
{
	return new Dummy;
}
