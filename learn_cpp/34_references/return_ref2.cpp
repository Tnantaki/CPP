#include <iostream>

class Car
{
private:
	std::string	_name;
public:
	Car(std::string name) : _name(name){}
	~Car(void){}
	std::string&		GetNameRef(void);
	std::string const&	GetNameRefConst(void) const;
	std::string*		GetNamePtr(void);
	std::string const*	GetNamePtrConst(void) const;
};

std::string&		Car::GetNameRef(void) {return this->_name;}
std::string const&	Car::GetNameRefConst(void) const {return this->_name;}
std::string*		Car::GetNamePtr(void) {return &(this->_name);}
std::string const*	Car::GetNamePtrConst(void) const {return &(this->_name);}

int	main(void)
{
	Car	mos("BMW");
	Car	max("Benz");

	std::cout << "Mos car: " << mos.GetNameRefConst() << "  Max car: " << max.GetNameRefConst() << std::endl;
	std::cout << "Mos car: " << *(mos.GetNamePtrConst()) << "  Max car: " << *(max.GetNamePtrConst()) << std::endl;

	mos.GetNameRef() = "Porche";
	std::cout << "Mos car: " << mos.GetNameRefConst() << std::endl;
	*(mos.GetNamePtr()) = "Ford";
	std::cout << "Mos car: " << mos.GetNameRefConst() << std::endl;
}