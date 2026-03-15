//Swap two numbers using third variable.
#include<iostream>
using namespace std;
// Iss question meh idea nhi aarha tha ki kaise hoga 
int main(){
    int x;
    int y, temp;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;

    temp = x;
    x = y;
    y = temp;

    cout<<"After swapping: "<<endl;
    cout<<"First number: "<<x<<endl;
    cout<<"Second number: "<<y<<endl;

    return 0;
    
}
