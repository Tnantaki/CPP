#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall();
		BrickWall(BrickWall const& rhs);
		BrickWall&	operator=(BrickWall const& rhs);
		~BrickWall();

		ATarget*	clone() const;
};

#endif