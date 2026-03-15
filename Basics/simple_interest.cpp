//Find simple interest.
#include<iostream>
#include<string>
using namespace std;
int main(){
    double principal;
    double rate;
    double time;

    cout<<"Enter the principal: ";
    cin>>principal;
    cout<<"Enter the rate: ";
    cin>>rate;
    cout<<"Enter the time: ";
    cin>>time;

    double interest = principal*rate*time/100;

    cout<<"The simple interest is"<<interest<<endl;

    return 0;
}
