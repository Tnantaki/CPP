/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:36:07 by marvin            #+#    #+#             */
/*   Updated: 2023/09/17 13:36:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <sstream>

# define BLACK	"\e[0;30m"
# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define PURPLE	"\e[0;35m"
# define CYAN	"\e[0;36m"
# define WHITE	"\e[0;37m"
# define RESET	"\e[0m"

// In object-oriented programming, a "static class" typically refers to a class that cannot be instantiated
// , meaning you cannot create objects (instances) of that class. Instead, you access its methods
//  and properties directly using the class name itself, without needing to create an instance of the class.
//  Static classes are often used to contain utility methods or constants that do not require maintaining state
//   across multiple instances.

enum e_type
{
	e_float, e_double
};

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const& other);
		ScalarConverter&	operator=(ScalarConverter const& rhs);
		~ScalarConverter();

		static void	convert(const char* str);
};

#endif