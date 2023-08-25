#include <iostream>

using namespace std;

class Base1 {
protected:
	std::string	name;
public:
	Base1(std::string data) : name(data) {}
	void	setName(std::string data) {
		name = data;
	}
	void	disName(void) {
		cout << name << endl;
	}
};
class Base2 : virtual public Base1{
private:
public:
	Base2(std::string data) : Base1(data + "Hello") {
	}
	void	setName(std::string data) {
		name = data;
	}
	void	disName(void) {
		cout << name << endl;
	}
};
class Base3 : public Base2{
private:
	std::string	name;
public:
	Base3(std::string data) : Base1(data + "Mama"), Base2(data + "Gaga") {}
	void	setName(std::string data) {
		name = data;
	}
	void	disName(void) {
		cout << name << endl;
	}
};

int main() {
	Base3	base("Prach");

	cout << "size: " << sizeof(base) << endl;
	base.Base2::disName();
	base.Base1::disName();
	std::string str = NULL;
	// base.setName("Mos Ja");
	// base.disName();
	// base.Base2::disName();
	// base.Base1::setName("Rava");
	// base.Base2::disName();
	// cout << sizeof (string) << endl;
}