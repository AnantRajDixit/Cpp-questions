//Find smallest of three numbers.
#include<iostream>
using namespace std;

int main(){
    int a, b, c;

    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;

    if (a<b && a<c)
    {
        cout<<"First number is the smallest";
    }
    else if (b<a && b<c)
    {
        cout<<"Second number is the smallest";
    }
    else
    {
        cout<<"Third number is the smallest";
    }
    
}
