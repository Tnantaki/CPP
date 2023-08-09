#include "Point.hpp"

static Fixed	absFixed(Fixed fpNum)
{
	if (fpNum < 0)
		return (fpNum * -1);
	return (fpNum);
}

static Fixed	triangleArea(Point const& a, Point const& b, Point const& c)
{
	return absFixed((a.getFixedX() * (b.getFixedY() - c.getFixedY())
		+ b.getFixedX() * (c.getFixedY() - a.getFixedY())
		+ c.getFixedX() * (a.getFixedY() - b.getFixedY())) / 2);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	area = triangleArea(a, b, c);
	Fixed	PAB = triangleArea(point, a, b);
	Fixed	PBC = triangleArea(point, b, c);
	Fixed	PAC = triangleArea(point, a, c);

	if ((area == (PAB + PBC + PAC)) && PAB != 0 && PBC != 0 && PAC != 0)
		return (true);
	return (false);
}