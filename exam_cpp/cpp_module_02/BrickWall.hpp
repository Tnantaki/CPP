#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall(void);
		BrickWall(BrickWall const & rhs);
		BrickWall&	operator=(BrickWall const & rhs);
		~BrickWall(void);

		ATarget*	clone(void) const;
};

#endif