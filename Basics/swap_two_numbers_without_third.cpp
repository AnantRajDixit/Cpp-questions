//Swap two numbers without third variable.
#include<iostream>
using namespace std;

//My idea and approach was wrong in this question

int main(){
    int x;
    int y;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;

    // Ab swap krenge without third variable
    x = x + y;
    y = x - y;
    x = x - y;

    cout<<"After Swapping"<<endl;
    cout<<"First Number: "<<x<<endl;
     cout << "Second Number: " << y << endl;

    
    return 0;
}
