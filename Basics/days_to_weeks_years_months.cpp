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

    cout<<"The number of weeks are: "<<weeks<<endl;
    cout<<"The number of months are: "<<months<<endl;
    cout<<"The number of years are: "<<years<<endl;

    return 0;

}
