//Find sum of digits.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int sum = 0; // declare and initialize sum

    while (n>0)
    {
        int digit = n % 10;
        sum += digit;
        n = n/10;
    }
    cout<<"sum of digits "<< sum <<endl;
    return 0;
}
