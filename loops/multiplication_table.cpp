//Print multiplication table of a number.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number for the multiplication table: ";
    cin>>n;

    for (int i = 0; i<= 10; i++)
    {
        cout<<n << "x"<< i << "=" << n*i<< endl;
    }
    return 0;
}
