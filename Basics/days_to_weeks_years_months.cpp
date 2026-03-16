//Convert days into years, weeks, days.
#include<iostream>
#include<string>
using namespace std;

int main(){

    int days;
    cout<<"Enter the number of days: ";
    cin>>days;

    int weeks = days/7;
    int months = days/30;
    int years = days/365;
    // Can be done like this too for accuracy
    int years = days / 365;                 // full years
    int weeks = (days % 365) / 7;           // weeks from remaining days
    int remainingDays = (days % 365) % 7;   // leftover days

    cout<<"The number of weeks are: "<<weeks<<endl;
    cout<<"The number of months are: "<<months<<endl;
    cout<<"The number of years are: "<<years<<endl;

    return 0;

}
