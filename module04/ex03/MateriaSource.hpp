/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:26:46 by tnantaki          #+#    #+#             */
/*   Updated: 2023/08/21 22:26:46 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	_mat[4];
	int			_size;
public:
	MateriaSource();
	MateriaSource(MateriaSource const& other);
	MateriaSource&	operator=(MateriaSource const& rhs);
	~MateriaSource();

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const& type);
};

#endif