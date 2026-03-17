//Find largest of three numbers.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter value a: ";
    cin>>a;
    cout<<"Enter value b: ";
    cin>>b;
    cout<<"Enter value c: ";
    cin>>c;

    if (a>b)
    {
    if (a>c)     //used nested if
    {
        cout<<"a is the largest";
    }
    
    }
    else if (b>c)
    {
        if (b>a)
        {
            cout<<"b is the largest";
        }
        
    }
    else
    {
        cout<<"c is the largest";
    }
    return 0;
    
}
