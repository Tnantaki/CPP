/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:15:02 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:15:02 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void	setName(std::string name);
	void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif