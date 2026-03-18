//Check if year is leap year.
#include<iostream>
using namespace std;

int main(){

    int year;
    cout<<"Enter the number: ";
    cin>>year;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout<<"It is a leap year";
    }
    else{
        cout<<"It is not a leap year";
    }
    
    return 0;
    
}
