#include<iostream>
using namespace std;

//Base class
class Person{
    public:
    string name;
    int age;
    void displayPerson(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;

    }
    
};

//Derived class

class Student: public Person{
    public:
    int rollNo;

    void displayStudent(){
        cout<<"Roll Number: "<<rollNo<<endl;

    }
};

int main(){
    Student s;

    //Assign Values
    s.name = "Anant";
    s.age = 19;
    s.rollNo = 67;

    //Display Details
    s.displayPerson();
    s.displayStudent();

    return 0;
}



