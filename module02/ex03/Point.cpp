#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	// std::cout << "Parametric constructor called" << std::endl;
}

Point::Point(Point const& other) : _x(other._x), _y(other._y)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Point::~Point(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Point&	Point::operator=(Point const& rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		std::cout << "Can't assignment to constant member" << std::endl;
	return *this;
}

Fixed	Point::getFixedX(void) const {return this->_x;}

Fixed	Point::getFixedY(void) const {return this->_y;}

std::ostream&	operator<<(std::ostream& OUT, Point const& obj)
{
	OUT << "x: " << obj.getFixedX();
	OUT	<< ", y: " << obj.getFixedY();
	return (OUT);
}
