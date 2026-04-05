#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    int price;

public:
    // Default Constructor
    Car() {
        brand = "Unknown";
        price = 0;
    }

    // Parameterized Constructor
    Car(string b, int p) {
        brand = b;
        price = p;
    }

    // Copy Constructor
    Car(const Car &c) {
        brand = c.brand;
        price = c.price;
    }

    // Display Function
    void display() const {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    // Default constructor
    Car c1;
    c1.display();

    // Parameterized constructor
    Car c2("BMW", 5000000);
    c2.display();

    // Copy constructor
    Car c3 = c2;
    c3.display();

    return 0;
}
