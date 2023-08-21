/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:17:34 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:17:34 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPALCE_HPP
# define FILEREPALCE_HPP

#include <iostream>
#include <string>
#include <fstream>

bool	readFile(std::string name, std::string &str);
bool	writeFile(std::string name, std::string str);
void	replace_str(std::string &str, std::string s1, std::string s2);

#endif