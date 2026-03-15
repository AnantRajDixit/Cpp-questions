//Print your name, age, and city.
#include<iostream>
#include<string>
using namespace std;

int main(){
    int age;
    string name;
    string city;
    cout << "enter name: "<<endl;
    cin>> name;
    cout << "enter age: "<<endl;
    cin>>age;
    cout << "from: "<<endl;
    cin>>city;
    cout<<"My name is "<<name<< ", I am from "<<city<< " and My age is "<< age<<endl;
    return 0;
}