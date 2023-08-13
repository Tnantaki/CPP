#include <iostream>

//	### Overloaded Constructor ###
//	multiple constructors with the same name but different parameters
//	allows for varying arguments when instantiating an object

class Human
{
	public:
		std::string name;
		std::string occupation;
		int age;

		Human()
		{}

		Human(std::string name)
		{
			this->name = name;
		}

		Human(std::string name, std::string occupation)
		{
			this->name = name;
			this->occupation = occupation;
		}

		Human(std::string name, std::string occupation, int age)
		{
			this->name = name;
			this->occupation = occupation;
			this->age = age;
		}

};

int	main(void)
{
	Human h1("Mos");
	std::cout << h1.name << std::endl;

	std::cout << "******************" << std::endl;
	Human h2("Mac", "Architeture", 20);
	std::cout << h2.name << std::endl;
	std::cout << h2.occupation << std::endl;
	std::cout << h2.age << std::endl;
	Human h3;
	return (0);
}

