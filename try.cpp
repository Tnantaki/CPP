#include <iostream>

using namespace std;

class Mos
{
public:
	string	str[3];
};

int main() {
	Mos	*var1 = new Mos;
	var1->str[0] = "Hello";
	var1->str[1] = "How";
	var1->str[2] = "Are";
	Mos	*var2 = var1;

	cout << &(var2->str[1]) << endl;
	cout << &(var1->str[1]) << endl;
}