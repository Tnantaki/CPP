#include <iostream>
#include <string>
//Diamond inheritance pattern

using namespace std;

class A
{
public:
	int	Num;
	A(int num) : Num(num) {}
	void	makeSound() {cout << "form A"<<endl;}
};
class B:virtual public A
{
public:
	virtual void	makeSound() {cout << "from B"<<endl;}
	B(int num) : A(num) {}
};
class C:virtual public A
{
public:
	virtual void	makeSound() {cout << "from C"<<endl;}
	C(int num) : A(num) {}
};
class D:public B, public C
{
private:
	string Name;
public:
	// using	B::makeSound;
	// using	C::makeSound;
	void	makeSound() {B::makeSound();}
	D(int num) : A(num), B(num), C(num) {}
};

int	main(void)
{
	cout << "size of A: " << sizeof(A) << endl;
	cout << "size of B: " << sizeof(B) << endl;
	cout << "size of C: " << sizeof(C) << endl;
	cout << "size of D: " << sizeof(D) << endl;

	D	var(10);
	var.makeSound();
}