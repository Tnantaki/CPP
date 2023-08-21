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
	this->data[i] = data;
}

std::string	Contact::get_cont(int i)
{
	return (this->data[i]);
}

std::string	Contact::get_10word(int i)
{
	if (this->data[i].length() > 10)
		return (this->data[i].substr(0, 9) + ".");
	return (this->data[i]);
}
