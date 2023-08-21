/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:17:39 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:17:39 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplace.hpp"

int	main(int argc, char **argv)
{
	std::string		str;

	if (argc != 4)
	{
		std::cerr << "The program takes 3 parameters in the following order:" << std::endl;
		std::cerr << "./program filename string_to_find string_to_replace" << std::endl;
		return (1);
	}
	if (!readFile(argv[1], str))
		return (1);
	replace_str(str, argv[2], argv[3]);
	if (!writeFile(argv[1], str))
		return (1);
	return (0);
}