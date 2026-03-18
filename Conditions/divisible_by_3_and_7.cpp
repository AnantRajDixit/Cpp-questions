//Check if number is multiple of 3 and 7.
#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    if (num%3==0 && num%7==0)
    {
       cout<<"Number is divisble by 3 and 7";
    }
    else{
        cout<<"Number is not divisble by 3 and 7";
    }
    return 0;
}
