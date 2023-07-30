#include <iostream>
using std::string;
//Paradigm
//object oriented programing
//object is Collection of : attribute and method
//	-1.attribute : characteristic of an object (variable).
//	-2.method : Option of an object can perform (function).
// 4 pillars important principle concepts of OOP
//	-1.Encapsulation : Use private area to encapsulate some member and create Setter & Getter function in public area to invoke member
//	-2.Abstraction : The simple side that easy to use by have the complex procedure implement behide.
//		- There are a simple side (User Interface)
//		- There are a complex side (Back end side)
//		We put the prototype in abtract class to invoke funciton
//		and function in base class that have a lot of complex thing.
//	-3.Inheritance : 
//		- There are base class, Super class, Parent class
//		- There are derived class, Sub class, Child class
//		if derived class inherite from base class, it will have the same member of the base class
//		and member of your own class.
//	-4.Polymorphism : having multiple forms
//		Code can work in different type of object.
// 3 Access modifilers
//	-1. private : can't access outside of the class, eventhough inherited class
//	-2. public : can access outside of the class
//	-3. protected : something between private and public, there are rule for this
//		can access on inherited class
// Constructors it will create by default if you not initialize variable of member
// 3 Rules to create constructors
//	-1. constructor does not return type
//	-2. constructor has the same name as the class
//	-3. constructor have to be in public area

// This is an Abstract of Human Class
class AbstractHuman
{
	virtual void AskForPromotion() = 0; //which class is inherited of this abtract have to provide imprementation of this abtract
};

// Class is kind of like struct that can have member and function
class Human : AbstractHuman
{
	private:// To explicily see the private area (Usually, dont' have to write it's be set to private by defualt)
		string	occupation;// this are attribute member of this class
		int		age;
	protected:// To can access in inherited class
		string	name;
	public:// if you don't type anything it will set to be private by default
		// setter : part of encapsulation use for set data in private area
		void SetName(string name) {
			this->name = name;
		}
		void SetOccupation(string occupation) {
			this->occupation = occupation;
		}
		void SetAge(int age) {
			this->age = age;
		}
		// getter : part of encapsulation use for read the data in private area
		string GetName() {return (name);}
		string GetOccupation() {return (occupation);}
		int GetAge() {return (age);}

		//These are method of this class
		void intruducing() {
			std::cout << "Name :" << name << std::endl;
			std::cout << "Occupation :" << occupation << std::endl;
			std::cout << "Age :" << age << std::endl;
		}
		void eating() {std::cout << name << " is eating!" << std::endl;}
		void sleeping() {std::cout << name<< " is sleeping!" << std::endl;}
		void dancing() {std::cout << name << " is dancing!" << std::endl;}
		Human(string name, string occupation, int age){
			this->name = name;
			this->occupation = occupation;
			this->age = age;
		}
		//Abstract implementation
		void AskForPromotion() {
			if (age > 25)
				std::cout << name << " got promoted!" << std::endl;
			else
				std::cout << name << ", sorry You don't got promoted" << std::endl;
		}
		virtual void Work() { // virtual function : check the function in derived class before, if it's has it will run on that class first.
			std::cout << name << " is going to working!" << std::endl;
		}
};
// derived class : base class
class Developer : public Human { //Use public because they be set private in default and can't use the method in Base class
	public:
		string	FlaLan;
		Developer(string name, string occupation, int age, string FlaLan)
			:Human(name, occupation, age)
		{
			this->FlaLan = FlaLan;
		}
		void FixBug(){
			std::cout << name << " Fix bug using " << FlaLan << std::endl;
		}
		void Work() {
			std::cout << name << " is writing " << FlaLan << " code" << std::endl;
		}
};

class Singer : public Human {
	public:
		string	Song;
		Singer(string name, string occupation, int age, string Song)
			:Human(name, occupation, age)
		{
			this->Song = Song;
		}
		void SingSong(){
			std::cout << name << " is preparing " << Song << " song" << std::endl;
		}
		void Work() {
			std::cout << name << " is singing " << Song << " song" << std::endl;
		}
};
int	main(void)
{
	Human h1 = Human("Mos", "Student", 22);
	Developer d1 = Developer("Mac", "Architecture", 20, "C");
	Singer s1 = Singer("May", "Accountor", 26, "Love you 3000");
	// h1 is an object of Human class
	// h1.intruducing();
	// h1.AskForPromotion();
	// d1.intruducing();
	// d1.AskForPromotion();
	// s1.intruducing();
	// s1.SingSong();
	// s1.AskForPromotion();
	// d1.Work();
	// s1.Work();
	Human *p1 = &d1;
	Human *p2 = &s1;

	p1->Work();
	p2->Work();

	return (0);
}

