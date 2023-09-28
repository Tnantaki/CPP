/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:36:14 by marvin            #+#    #+#             */
/*   Updated: 2023/09/17 13:36:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// ********************************************************** //
// ----------------- Special Member Functions --------------- //
// ********************************************************** //

Serializer::Serializer()
{
	// std::cout << YELLOW << "[Serializer] Default Constructor Called" << RESET << std::endl;
}

Serializer::Serializer(Serializer const& other)
{
	static_cast<void>(other);
	// std::cout << YELLOW << "[Serializer] Copy Constructor Called" << RESET << std::endl;
}

Serializer&	Serializer::operator=(Serializer const& rhs)
{
	static_cast<void>(rhs);
	// std::cout << YELLOW << "[Serializer] Copy Assignment Operator Called" << RESET << std::endl;
	return (*this);
}

Serializer::~Serializer()
{
	// std::cout << YELLOW << "[Serializer] Destructor Called" << RESET << std::endl;
}

// ********************************************************** //
// ----------------- Static Member Functions ---------------- //
// ********************************************************** //

uintptr_t	Serializer::serialize(Data* ptr)
{
	if (!ptr)
		return 0;
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	if (!raw)
		return NULL;
	Data*	data = reinterpret_cast<Data*>(raw);
	return data;
}