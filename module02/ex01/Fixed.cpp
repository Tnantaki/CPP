#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_fpNum = 0;
}

Fixed::Fixed(int const num) : _fpNum(num << _ftBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const num) : _fpNum(roundf(num * (1 << _ftBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& rhs) : _fpNum(rhs._fpNum)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fpNum = rhs._fpNum;
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fpNum = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fpNum;
}

int	Fixed::toInt(void) const
{
	return (this->_fpNum >> _ftBits);
}

float	Fixed::toFloat(void) const
{
	return (float(this->_fpNum) / (1 << _ftBits));
}

std::ostream&	operator<<(std::ostream& OUT, Fixed const& obj)
{
	OUT << obj.toFloat();
	return (OUT);
}
