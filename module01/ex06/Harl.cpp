/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:18:04 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:18:04 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
	this->_fp[0] = &Harl::_debug;
	this->_fp[1] = &Harl::_info;
	this->_fp[2] = &Harl::_warning;
	this->_fp[3] = &Harl::_error;
}

Harl::~Harl() {}

void	Harl::complainFilter(std::string level)
{
	int			i = 0;
	std::string	complain[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		if (!complain[i].compare(level))
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		(this->*_fp[i])();
		break;
	case 1:
		(this->*_fp[i])();
		break;
	case 2:
		(this->*_fp[i])();
		break;
	case 3:
		(this->*_fp[i])();
		break;
	default:
		std::cout << "[Probably complaining about insignificant problems]" << std::endl;
		break;
	}
}

void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
