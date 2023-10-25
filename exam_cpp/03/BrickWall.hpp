#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget
{
public:
	BrickWall();
	BrickWall(BrickWall const & other);
	BrickWall&	operator=(BrickWall const & other);
	~BrickWall();

	ATarget*	clone() const;
};

#endif