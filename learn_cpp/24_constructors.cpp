#include <iostream>

//	constructor : special method that is automatically called when an object is instantiated
//					Useful for assigning valuess to attributes as arguments

class Human
{
	public:
		std::string name;
		std::string occupation;
		int age;

		Human(std::string name, std::string occupation, int age) // constructor have the same name of the class
		{
			this->name = name;//Use "this->" because we use the same name of argument;
			this->occupation = occupation;
			this->age = age;
		}
		// In case of you don't want use the same variable name
		// Human(std::string x, std::string y, int z)
		// {
		// 	name = x;
		// 	occupation = y;
		// 	age = z;
		// }

		void eating() {std::cout << name << " is eating!" << std::endl;}
		void sleeping() {std::cout << name<< " is sleeping!" << std::endl;}
		void dancing() {std::cout << name << " is dancing!" << std::endl;}
};

int	main(void)
{
	Human h1("Mos", "Student", 22);
	std::cout << h1.name << std::endl;
	std::cout << h1.occupation << std::endl;
	std::cout << h1.age << std::endl;
	h1.eating();
	h1.sleeping();
	h1.dancing();

	std::cout << "******************" << std::endl;
	Human h2("Mac", "Architeture", 20);
	std::cout << h2.name << std::endl;
	std::cout << h2.occupation << std::endl;
	std::cout << h2.age << std::endl;
	return (0);
}

