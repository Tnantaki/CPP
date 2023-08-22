/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:09:46 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:09:48 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_cont(std::string data, int i)
{
	if (i == 0)
		this->_firstname = data;
	else if (i == 1)
		this->_lastname = data;
	else if (i == 2)
		this->_nickname = data;
	else if (i == 3)
		this->_phonenumber = data;
	else if (i == 4)
		this->_darkestsecret = data;
}

std::string	Contact::get_cont(int i)
{
	if (i == 0)
		return (this->_firstname);
	else if (i == 1)
		return (this->_lastname);
	else if (i == 2)
		return (this->_nickname);
	else if (i == 3)
		return (this->_phonenumber);
	else if (i == 4)
		return (this->_darkestsecret);
	else
		return ("");
}

std::string	Contact::get_10word(int i)
{
	if (i == 0 && this->_firstname.length() > 10)
		return (this->_firstname.substr(0, 9) + ".");
	else if (i == 1 && this->_lastname.length() > 10)
		return (this->_lastname.substr(0, 9) + ".");
	else if (i == 2 && this->_nickname.length() > 10)
		return (this->_nickname.substr(0, 9) + ".");
	else if (i == 3 && this->_phonenumber.length() > 10)
		return (this->_phonenumber.substr(0, 9) + ".");
	else if (i == 4 && this->_darkestsecret.length() > 10)
		return (this->_darkestsecret.substr(0, 9) + ".");
	else
		return (this->get_cont(i));
}
