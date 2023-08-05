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

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (!(this->_level[i].compare(level)))
		{
			(this->*_fp[i])();
			break;
		}
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
