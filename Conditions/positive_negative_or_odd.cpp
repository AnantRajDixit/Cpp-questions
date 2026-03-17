//Check if number is positive, negative, or zero.
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num>=1)
    {
        cout<<"positive";
    }
        else if (num<=-1)
        {
            cout<<"negative";
        }
        else{
            cout<<"zero";
        }
    
    return 0;
}
