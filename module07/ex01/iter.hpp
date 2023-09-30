/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 07:16:16 by tnantaki          #+#    #+#             */
/*   Updated: 2023/09/21 07:16:16 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstdlib>

template<typename T, typename U>
void	iter(T* array, size_t length, void	(*func)(U&))
{
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

#endif