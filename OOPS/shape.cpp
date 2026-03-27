#include <iostream>
#include <string>

// Base Class: The "Abstract" concept of a Shape
class Shape {
protected:
    std::string shapeName;

public:
    Shape(std::string name) : shapeName(name) {}

    // A general function that children can override
    void introduce() {
        std::cout << "I am a " << shapeName << "." << std::endl;
    }
};

// Derived Class: A specific type of Shape
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor passes the name "Rectangle" up to the Shape parent
    Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w) {}

    // Specific logic for a Rectangle
    double calculateArea() {
        return length * width;
    }

    void displayDetails() {
        introduce(); // Calling the parent's function
        std::cout << "Area: " << calculateArea() << " units squared." << std::endl;
    }
};

int main() {
    // Creating a Rectangle object
    Rectangle rect(10.5, 5.0);

    std::cout << "--- Geometry Engine Output ---" << std::endl;
    rect.displayDetails();

    return 0;
}
