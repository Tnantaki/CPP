#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_cont_list = 0;
	this->_console_msg[0] = "first name   :";
	this->_console_msg[1] = "last name    :";
	this->_console_msg[2] = "nickname     :";
	this->_console_msg[3] = "phone number :";
	this->_console_msg[4] = "dark secret  :";
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::open_phonebook(void)
{
	std::cout << "######## PhoneBook ########" << std::endl;
	std::cout << "ADD    : to add new contact" << std::endl;
	std::cout << "SEARCH : to search contact" << std::endl;
	std::cout << "EXIT   : to exit" << std::endl;
	std::cout << "---------------------------" << std::endl;
}

void	PhoneBook::add_cont(void)
{
	std::string	buffer[5];

	for (int i = 0; i < 5; i++)
	{
		std::cout << this->_console_msg[i];
		getline(std::cin, buffer[i]);
	}
	if (!this->_check_emptyfield(buffer))
		return ;
	this->_save_cont(buffer);
}

void	PhoneBook::search_cont(void)
{
	int			index;
	std::string	input;

	this->_display();
	std::cout << "Enter Index > ";
	getline(std::cin, input);
	std::istringstream	iss(input);
	if (iss >> index || iss.eof())
	{
		if (index >= 0 && index < this->_cont_list)
		{
			for (int i = 0; i < 5; i++)
				std::cout << this->_console_msg[i] << this->_contact[index].get_cont(i) << std::endl;
		}
		else
			std::cout << "Index are not on the list" << std::endl;
	}
	else
		std::cout << "Invalid input. Please enter number." << std::endl;
}

bool	PhoneBook::_check_emptyfield(std::string *data)
{
	for (int i = 0; i < 5; i++)
	{
		if (data[i].empty())
		{
			std::cout << "Can't have empty field in the contact" << std::endl;
			return (false);
		}
	}
	return (true);
}

void	PhoneBook::_save_cont(std::string *buffer)
{
	static int	index = 0;

	if (index == 8)
		index = 0;
	for (int i = 0; i < 5; i++)
		this->_contact[index].set_cont(buffer[i], i);
	if (this->_cont_list < 8)
		this->_cont_list++;
	index++;
}

void	PhoneBook::_display(void)
{
	std::cout << "|   Index  | Firstname| Lastname | Nickname |" << std::endl;
	for (int i = 0; i < 45; i++)
		std::cout << '_';
	std::cout << std::endl;
	for (int j = 0; j < this->_cont_list; j++)
	{
		std::cout << "|" << std::setw(10) << j << "|";
		for (int i = 0; i < 3; i++)
		{
			std::cout << std::setw(10) << this->_contact[j].get_10word(i);
			std::cout << "|";
		}
		std::cout << std::endl;
	}
}
