#include <iostream>

class Shape {
public:
	virtual void draw() {
		std::cout << "Drawing a shape." << std::endl;
	}
};

class Circle : public Shape {
public:
	void draw() override {
		std::cout << "Drawing a circle." << std::endl;
	}
};

class Square : public Shape {
public:
	void draw() override {
		std::cout << "Drawing a square." << std::endl;
	}
};

int main() {
	Shape* shapes[] = {new Circle(), new Square()};

	for (Shape* shape : shapes) {
		shape->draw(); // Calls the appropriate draw() based on actual object type
	}

	return 0;
}