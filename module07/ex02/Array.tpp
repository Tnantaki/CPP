#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array() : _size(1), _array(new T())
{
	// std::cout << YELLOW << "[Array] Default Constructor Called" << RESET << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[n])
{
	// std::cout << YELLOW << "[Array] Parametric Constructor Called" << RESET << std::endl;
}

template<typename T>
Array<T>::Array(Array const& other) : _size(other._size)
{
	// std::cout << YELLOW << "[Array] Copy Constructor Called" << RESET << std::endl;
	this->_array = new T[_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = other._array[i];
}

template<typename T>
Array<T>&	Array<T>::operator=(Array const& rhs)
{
	if (this != &rhs)
	{
		// std::cout << YELLOW << "[Array] Copy Assignment Operator Called" << RESET << std::endl;
		this->_size = rhs._size;
		delete [] this->_array;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs._array[i];
	}
	return *this;
}

template<typename T>
Array<T>::~Array()
{
	// std::cout << YELLOW << "[Array] Destructor Called" << RESET << std::endl;
	delete [] _array;
}

// ********************************************************** //
// --------------------- Member Functions ------------------- //
// ********************************************************** //

template<typename T>
unsigned int	Array<T>::size() const {return this->_size;}

// we can't change value of attribute but
// we can change the value that attribute point to in const member function.
template<typename T>
T&	Array<T>::operator[](long int index) const
{
	if (index < 0 || index >= static_cast<unsigned int>(this->_size))
		throw OutOfRangeException();
	return this->_array[index];
}

#endif