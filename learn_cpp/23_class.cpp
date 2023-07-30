#include <iostream>
using namespace std;

class Human
{
	public:
	string	name = "Mos";
	int		age = 20;
	string	occupation = "Programer";
	void	eat(void)
	{
		cout << name << " is eating" << endl;
	}
};

int	main(void)
{
	Human	human1;

	cout << "My name is " << human1.name << ", " << human1.age << " years old" << ", My job is " << human1.occupation << endl;
	human1.eat();

	Human	human2;
	human2.name = "Mac";
	human2.age = 18;
	human2.occupation = "Architecture";

	cout << "My name is " << human2.name << ", " << human2.age << " years old" << ", My job is " << human2.occupation << endl;
	human2.eat();
}