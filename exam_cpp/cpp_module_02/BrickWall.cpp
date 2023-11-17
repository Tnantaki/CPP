#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::BrickWall(BrickWall const & rhs) : ATarget(rhs) {}

BrickWall&	BrickWall::operator=(BrickWall const & rhs) {
	if (this != &rhs)
		ATarget::operator=(rhs);
	return (*this);
}

BrickWall::~BrickWall() {}

ATarget*	BrickWall::clone() const {
	return new BrickWall;
}
