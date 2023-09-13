#include <iostream>

class MyClass {
public:
    int data;

    MyClass() : data(0) {
        std::cout << "Default constructor called." << std::endl;
    }

    MyClass(int val) : data(val) {
        std::cout << "Parametrized constructor called with value " << val << "." << std::endl;
    }
};

int main() {
    // Define an array of lambda functions
    MyClass constructors[] = {
        []() { return MyClass(); },             // Default constructor
        [](int val) { return MyClass(val); }    // Parametrized constructor
    };

    // Create objects using the lambda functions
    MyClass obj1 = constructors[0]();
    MyClass obj2 = constructors[1](42);

    std::cout << "obj1.data: " << obj1.data << std::endl;
    std::cout << "obj2.data: " << obj2.data << std::endl;

    return 0;
}
In this updated example, we use lambda functions to simulate the behavior of constructor pointers. The lambda functions create instances of MyClass using the desired constructor, and you can use the array constructors to create objects with different constructors.





