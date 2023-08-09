#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const	_x;
	Fixed const	_y;
public:
	Point(void);
	Point(float const x, float const y);
	Point(Point const& other);
	~Point(void);

	Point&	operator=(Point const& rhs);

	Fixed	getFixedX(void) const;
	Fixed	getFixedY(void) const;
};

std::ostream&	operator<<(std::ostream& OUT, Point const& obj);

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif