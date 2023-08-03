#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
	std::string	data[5];
public:
	void		set_cont(std::string data, int i);
	std::string	get_cont(int i);
	std::string	get_10word(int i);
};

#endif