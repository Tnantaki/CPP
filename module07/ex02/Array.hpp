/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:11:04 by tnantaki          #+#    #+#             */
/*   Updated: 2023/09/21 12:11:04 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

# define BLACK	"\e[0;30m"
# define RED	"\e[0;31m"
# define GREEN	"\e[0;32m"
# define YELLOW	"\e[0;33m"
# define BLUE	"\e[0;34m"
# define PURPLE	"\e[0;35m"
# define CYAN	"\e[0;36m"
# define WHITE	"\e[0;37m"
# define RESET	"\e[0m"

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const& other);
		Array&	operator=(Array const& rhs);
		~Array();

		unsigned int	size() const;
		T&	operator[](long int index) const;

		class OutOfRangeException : public std::exception {
			const char* what() const throw() {return "index is out of bounds";}
		};
	private:
		unsigned int	_size;
		T	*_array;
};

#include "Array.tpp"

template<typename T>
void	print(Array<T> const& obj)
{
	for (unsigned int i = 0; i < obj.size(); i++)
		std::cout << obj[i] << ", ";
	std::cout << std::endl;
}

#endif