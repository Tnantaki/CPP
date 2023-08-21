/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:19:00 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:19:00 by tnantaki         ###   ########.fr       */
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
};

std::ostream&	operator<<(std::ostream& OUT, Fixed const& obj);

#endif