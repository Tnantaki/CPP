/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 09:14:45 by marvin            #+#    #+#             */
/*   Updated: 2023/09/20 09:14:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T& a, T& b)
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const&	min(T const& a, T const& b) {return (a < b ? a : b);}

template<typename T>
T const&	max(T const& a, T const& b) {return (a > b ? a : b);}

#endif