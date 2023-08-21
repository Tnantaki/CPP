/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:19:08 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:19:08 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fpNum(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num) : _fpNum(num << _ftBits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const num) : _fpNum(roundf(num * (1 << _ftBits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& rhs) : _fpNum(rhs._fpNum)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& rhs)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fpNum = rhs._fpNum;
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fpNum = raw;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
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

// ********************************************************** //
// ------------------ Comparision Operator ------------------ //
// ********************************************************** //

bool	Fixed::operator>(Fixed const& rhs) const
{
	return ((this->_fpNum > rhs._fpNum) ? true : false);
}

bool	Fixed::operator<(Fixed const& rhs) const
{
	return ((this->_fpNum < rhs._fpNum) ? true : false);
}

bool	Fixed::operator>=(Fixed const& rhs) const
{
	return ((this->_fpNum >= rhs._fpNum) ? true : false);
}

bool	Fixed::operator<=(Fixed const& rhs) const
{
	return ((this->_fpNum <= rhs._fpNum) ? true : false);
}

bool	Fixed::operator==(Fixed const& rhs) const
{
	return ((this->_fpNum == rhs._fpNum) ? true : false);
}

bool	Fixed::operator!=(Fixed const& rhs) const
{
	return (!(this->_fpNum == rhs._fpNum));
}

// ********************************************************** //
// ------------------- Arithmetic Operator ------------------ //
// ********************************************************** //

Fixed	Fixed::operator+(Fixed const& rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const& rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const& rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const& rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

// ********************************************************** //
// ------------------- Increment/Decrement ------------------ //
// ********************************************************** //

Fixed&	Fixed::operator++(void)
{
	++this->_fpNum;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	++this->_fpNum;
	return tmp;
}

Fixed&	Fixed::operator--(void)
{
	--this->_fpNum;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	--this->_fpNum;
	return tmp;
}

// ********************************************************** //
// ----------------- Max/Min member function ---------------- //
// ********************************************************** //

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return ((a <= b) ? a : b);
}

Fixed const&	Fixed::min(Fixed const& a, Fixed const& b)
{
	return ((a._fpNum <= b._fpNum) ? a : b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return ((a >= b) ? a : b);
}

Fixed const&	Fixed::max(Fixed const& a, Fixed const& b)
{
	return ((a._fpNum >= b._fpNum) ? a : b);
}
