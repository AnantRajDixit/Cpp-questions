#include <iostream>
#include <string>

// Base Class: The "Parent"
class Person {
protected: // 'protected' allows child classes to access these, but keeps them private to the outside
    std::string name;
    int age;

public:
    Person(std::string n, int a) : name(n), age(a) {}

    void displayBasicInfo() {
        std::cout << "Name: " << name << "\nAge: " << age << std::endl;
    }
};

// Derived Class: The "Child" (Inherits from Person)
class Student : public Person {
private:
    int studentID;
    std::string major;

public:
    // Constructor calling the Base Class constructor
    Student(std::string n, int a, int id, std::string m) 
        : Person(n, a), studentID(id), major(m) {}

    void displayStudentProfile() {
        // Accessing base class function
        displayBasicInfo(); 
        std::cout << "ID: " << studentID << "\nMajor: " << major << std::endl;
    }
};

int main() {
    // Creating an object of the derived class
    Student s1("Alice Smith", 20, 12345, "Computer Science");

    std::cout << "--- University Student Profile ---" << std::endl;
    s1.displayStudentProfile();

    return 0;
}
