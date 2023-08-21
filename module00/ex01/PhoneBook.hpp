/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:10:33 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:10:35 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <sstream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact		_contact[8];
	std::string	_console_msg[5];
	int			_cont_list;
	bool		_check_emptyfield(std::string *data);
	void		_save_cont(std::string *cont_field);
	void		_display(void);
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	open_phonebook(void);
	void	add_cont(void);
	void	search_cont(void);
};

#endif
