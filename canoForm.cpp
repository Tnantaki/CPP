#include <iostream>

// Canonical Othodox Form
// 1. Default Constructor
// 2. Destructor
// 3. Copy constructor
// 4. Equal Operator

class CanoForm
{
private:
	std::string	name;
	int			age;
	float		grade;
public:
	CanoForm(void); // Default Constructor
	CanoForm(std::string const name, int const age, float const grade); // Parametric Constructor
	CanoForm(CanoForm const& obj); // Copy Constructor
	~CanoForm(void); // Destructor

	std::string	getName(void) const;
	int			getAge(void) const;
	float		getGrade(void) const;

	CanoForm&	operator=(CanoForm const& operand);
};

CanoForm::CanoForm(void) : age(0), grade(0.00) {
	std::cout << "Default Constructor Called" << std::endl;
}
CanoForm::CanoForm(std::string const name, int const age, float const grade)
: name(name), age(age), grade(grade) {
	std::cout << "Parametric Constructor Called" << std::endl;
}

std::string	CanoForm::getName(void) const {return (this->name);}
int			CanoForm::getAge(void) const {return (this->age);}
float		CanoForm::getGrade(void) const {return (this->grade);}

CanoForm::CanoForm(CanoForm const& obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	name = obj.name;
	age = obj.age;
	grade = obj.grade;

}

CanoForm&	CanoForm::operator=(CanoForm const& operand)
{
	std::cout << "Assignment Operator Called" << std::endl;
	if (this != operand)
	{
		this->name = operand.name;
		this->age = operand.age;
		this->grade = operand.grade;
	}
	return (*this);
}

CanoForm::~CanoForm(void) {
	std::cout << "Destructor Called" << std::endl;
}

std::ostream&	operator<<(std::ostream& OUT, CanoForm& obj) {
	OUT << "name: " << obj.getName() << ", ";
	OUT << "age: " << obj.getAge() << ", ";
	OUT << "grade: " << obj.getGrade();
	return OUT;
}

int	main(void)
{
	// CanoForm	test1;
	// CanoForm	test2("Mos", 20, 2.88);
	// CanoForm	test3(test1);

	// std::cout << "Test1|" << test1 << std::endl;
	// std::cout << "Test2|" << test2 << std::endl;
	// std::cout << "Test3|" << test3 << std::endl;

	// test3 = test2;
	// std::cout << "Test3|" << test3 << std::endl;
	int	c = 1;
	int i = 0;
	int b = ++i++;
	std::cout << i << std::endl;
	std::cout << b << std::endl;
}
