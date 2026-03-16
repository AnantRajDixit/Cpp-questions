//Find perimeter of rectangle.
#include<iostream>
#include<string>
using namespace std;

int main(){
    float l, b;
    cout<<"Enter the length: ";
    cin>>l;
    cout<<"Enter the breadth: ";
    cin>>b;

    float perimeter = 2*(l+b);
    cout<<"The perimeter of rectangle is "<<perimeter<<"cm"<<endl;

    return 0;
}
