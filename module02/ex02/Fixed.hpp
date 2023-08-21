/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:19:12 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:19:12 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
private:
	int					_fpNum;
	static int const	_ftBits = 8;
public:
	Fixed(void);
	Fixed(int const num);
	Fixed(float const num);
	Fixed(Fixed const& rhs);
	~Fixed(void);

	Fixed&	operator=(Fixed const& rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(Fixed const& rhs) const;
	bool	operator<(Fixed const& rhs) const;
	bool	operator>=(Fixed const& rhs) const;
	bool	operator<=(Fixed const& rhs) const;
	bool	operator==(Fixed const& rhs) const;
	bool	operator!=(Fixed const& rhs) const;

	Fixed	operator+(Fixed const& rhs) const;
	Fixed	operator-(Fixed const& rhs) const;
	Fixed	operator*(Fixed const& rhs) const;
	Fixed	operator/(Fixed const& rhs) const;

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	static Fixed&		min(Fixed& a, Fixed& b);
	static Fixed const&	min(Fixed const& a, Fixed const& b);
	static Fixed&		max(Fixed& a, Fixed& b);
	static Fixed const&	max(Fixed const& a, Fixed const& b);
};

std::ostream&	operator<<(std::ostream& OUT, Fixed const& obj);

#endif