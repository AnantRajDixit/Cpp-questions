//Check if triangle is valid or not.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the three sides: ";
    cin>>a>> b>> c;
    if (a+b>c && a+c>b && b+c>a)
    {
        cout<<"It is a triangle";
    
    }
    else
    {
        cout<<"It is not a triangle";
    }
    return 0;
    
}
