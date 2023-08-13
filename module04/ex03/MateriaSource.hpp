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