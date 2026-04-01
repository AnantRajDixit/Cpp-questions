#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

// Derived Class
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark! Woof woof!" << endl;
    }
};

int main() {
    Dog myDog;

    // Calling member of Base class
    myDog.eat();

    // Calling member of Derived class
    myDog.bark();

    return 0;
}
