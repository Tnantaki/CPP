/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:36:03 by marvin            #+#    #+#             */
/*   Updated: 2023/09/17 13:36:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ********************************************************** //
// ----------------- Special Member Functions --------------- //
// ********************************************************** //

ScalarConverter::ScalarConverter()
{
	// std::cout << YELLOW << "[ScalarConverter] Default Constructor Called" << RESET << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const& other)
{
	static_cast<void>(other);
	// std::cout << YELLOW << "[ScalarConverter] Copy Constructor Called" << RESET << std::endl;
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const& rhs)
{
	static_cast<void>(rhs);
	// std::cout << YELLOW << "[ScalarConverter] Copy Assignment Operator Called" << RESET << std::endl;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	// std::cout << YELLOW << "[ScalarConverter] Destructor Called" << RESET << std::endl;
}

// ********************************************************** //
// ----------------- Static Member Functions ---------------- //
// ********************************************************** //

static void	dbOverFlow();
static bool	scienceNotation(std::string str, int type);
static void	convertChar(long double num, char* endptr, std::string str);
static void	convertInt(long double num, char* endptr, std::string str);
static void	convertFloat(long double num, char* endptr, std::string str);
static void	convertDouble(long double num, char* endptr, std::string str);

// I use to_string function to convert double -> string
// And count Length I will get 316. It allow on c++11.
void	ScalarConverter::convert(const char* str)
{
	char*		endptr;
	long double	num;

	num = strtold(str, &endptr);
	if (strlen(str) > 316 && (num > std::numeric_limits<double>::max()
	|| num < -std::numeric_limits<double>::max())) // Overflow Double Type
		return dbOverFlow();
	convertChar(num, endptr, std::string(str));
	convertInt(num, endptr, std::string(str));
	convertFloat(num, endptr, std::string(str));
	convertDouble(num, endptr, std::string(str));
}

static void	dbOverFlow()
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << "impossible" << std::endl;
	std::cout << "double: " << "impossible" << std::endl;
}

static bool	scienceNotation(std::string str, int type)
{
	if (!str.compare("nan") || !str.compare("nanf"))
	{
		if (type == e_double)
			std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << std::endl;
		else if (type == e_float)
			std::cout << "float: " << std::numeric_limits<double>::quiet_NaN() << "f" << std::endl;
		return true;
	}
	else if (!str.compare("inf") || !str.compare("inff") || !str.compare("+inf") || !str.compare("+inff"))
	{
		if (type == e_double)
			std::cout << "double: " << std::numeric_limits<double>::infinity() << std::endl;
		if (type == e_float)
			std::cout << "float: " << std::numeric_limits<float>::infinity() << "f" << std::endl;
		return true;
	}
	else if (!str.compare("-inf") || !str.compare("-inff"))
	{
		if (type == e_double)
			std::cout << "double: " << -std::numeric_limits<double>::infinity() << std::endl;
		if (type == e_float)
			std::cout << "float: " << -std::numeric_limits<float>::infinity() << "f" << std::endl;
		return true;
	}
	return false;
}

// Displayable Char is ASCII number 32 - 126
static void	convertChar(long double num, char* endptr, std::string str)
{
	if ((*endptr == '\0' || (*endptr == 'f' && *(endptr + 1) == '\0' && str.find_last_of(".", endptr - &str.at(0)) != std::string::npos))
	&& num > 32 && num < 126)
		std::cout << "char: '" << static_cast<char>(num) << "'" << std::endl;
	else if ((*endptr == '\0' || (*endptr == 'f' && *(endptr + 1) == '\0' && str.find_last_of(".", endptr - &str.at(0)) != std::string::npos))
	&& num >= std::numeric_limits<char>::min() && num <= std::numeric_limits<char>::max())
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << "impossible" << std::endl;
}

static void	convertInt(long double num, char* endptr, std::string str)
{
	if ((*endptr == '\0' || (*endptr == 'f' && *(endptr + 1) == '\0' && str.find_last_of(".", endptr - &str.at(0)) != std::string::npos))
	&& num >= std::numeric_limits<int>::min() && num <= std::numeric_limits<int>::max())
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	else
		std::cout << "int: " << "impossible" << std::endl;
}

static void	convertFloat(long double num, char* endptr, std::string str)
{
	if (scienceNotation(str, e_float))
		return ;
	else if ((*endptr == '\0' || (*endptr == 'f' && *(endptr + 1) == '\0' && str.find_last_of(".", endptr - &str.at(0)) != std::string::npos))
	&& num >= -std::numeric_limits<float>::max() && num <= std::numeric_limits<float>::max())
	{
		std::ostringstream	oss; // Use stringstream to convert float to string, Cause can't use to_string()
		oss << num;
		std::string	numStr = oss.str();
		if (numStr.find(".") == std::string::npos) // Check if number don't have decimal point.
			std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(num) << "f" << std::endl;
	}
	else
		std::cout << "float: " << "impossible" << std::endl;
}

static void	convertDouble(long double num, char* endptr, std::string str)
{
	if (scienceNotation(str, e_double))
		return ;
	else if ((*endptr == '\0' || (*endptr == 'f' && *(endptr + 1) == '\0' && str.find_last_of(".", endptr - &str.at(0)) != std::string::npos))
	&& num >= -std::numeric_limits<double>::max() && num <= std::numeric_limits<double>::max())
	{
		std::ostringstream	oss;
		oss << num;
		std::string	numStr = oss.str();
		if (numStr.find(".") == std::string::npos)
			std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
		else
			std::cout << "double: " << static_cast<double>(num) << std::endl;

	}
	else
		std::cout << "double: " << "impossible" << std::endl;
}
