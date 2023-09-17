/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:13:06 by marvin            #+#    #+#             */
/*   Updated: 2023/09/10 09:13:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void	prtData(Data data)
{
	std::cout << "name : " << data.name << std::endl;
	std::cout << "grade: " << data.grade << std::endl;
}

int	main()
{
	Data*	data = new Data;
	data->name = "Mos";
	data->grade = 2.42;

	std::cout << "Original Address: " << data << std::endl;
	prtData(*data);

	uintptr_t	uPtr =  Serializer::serialize(data);
	Data*		dataPtr = Serializer::deserialize(uPtr);

	std::cout << "After deserialize Address: " << dataPtr << std::endl;
	prtData(*dataPtr);
	delete data;
	return (0);
}