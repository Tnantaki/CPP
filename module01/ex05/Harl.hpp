#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
	std::string	_level[4];
	void	(Harl::*_fp[4])(void);
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
public:
	Harl(void);
	~Harl();
	void	complain(std::string level);
};


#endif