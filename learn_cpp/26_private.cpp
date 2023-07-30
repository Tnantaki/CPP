#include <iostream>
// Abstraction : Hidding unnecessary data from outside a class
// We use getter and setter function in public scope to access attributes in private scope
// getter : function that make the private attirbute READABLE
// setter : function that make the private attribute WRITEABLE

class Human
{
	public:
		std::string name = "Mos";
		std::string occupation = "Student";
		int age = 18;
	private:
		std::string pname = "Mac";
		std::string poccupation = "Architecture";
		int page = 16;
	public:
		Human(int age)
		{
			SetAge(age);
		}
		int ReadAge() {return (page);}
		void SetAge(int age)
		{
			if (age < 0)
				this->page = 0;
			else if (age >= 40)
				this->page = 40;
			else
				this->page = age;
		}


};

int	main(void)
{
	Human h1(20);
	std::cout << h1.name << std::endl;
	std::cout << h1.occupation << std::endl;
	std::cout << h1.age << std::endl;
	std::cout << h1.ReadAge() << std::endl;
	h1.SetAge(100);
	std::cout << h1.ReadAge() << std::endl;
	return (0);
}

