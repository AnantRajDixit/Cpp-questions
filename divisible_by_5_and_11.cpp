//Check if number is divisible by 5 and 11.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if (num%5==0 && num%11==0) 
    {
        cout<<"It is divisible by 5 and 11";
    }
    else
    {
        cout<<"It is not divisble by 5 and 11";
    }

    return 0;
    
}
