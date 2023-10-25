#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::BrickWall(BrickWall const & other) : ATarget(other) {}

BrickWall&	BrickWall::operator=(BrickWall const & other)
{
	if (this != &other)
	{
		ATarget::operator=(other);
	}
	return *this;
}

BrickWall::~BrickWall() {}

ATarget*	BrickWall::clone() const
{
	return new BrickWall(*this);
}
