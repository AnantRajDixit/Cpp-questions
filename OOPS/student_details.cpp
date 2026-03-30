//Create Student class with name, roll, marks

#include<iostream>

using namespace std;

class Student{
    public:

    string name;
    int roll_no;
    double marks;

    Student(){
        name = "No";
        roll_no = 0;
        marks = 0;

        cout<<"there is no data of this student"<<endl;


    }

    Student(string n, int r, double m){
        name = n;
        roll_no = r;
        marks = m;
        cout<<"The details and marks of the student are: "<<endl;

    }
    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"roll no.: "<<roll_no<<endl;
        cout<<"marks: "<<marks<<endl;
    }
};

int main(){
    Student S1;
    S1.display();
    cout<< endl;
    Student S2("Anant", 1024, 96);
    S2.display();
    return 0;
}
