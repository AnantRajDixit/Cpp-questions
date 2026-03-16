//Find area of triangle.
#include<iostream>
#include<string>
using namespace std;

int main(){
    float b, h;
    cout<<"Enter the base: ";
    cin>>b;
    cout<<"Enter the height: ";
    cin>>h;

    float area = 0.5*b*h;

    cout<<"The area of triangle is "<<area<<endl;

    return 0;
}
