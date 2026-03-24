//Find power of number.

#include<iostream>
using namespace std;

int main(){

    int base, exp, result = 1;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    for(int i = 0; i < exp; i++) result *= base;

    cout << base << "^" << exp << " = " << result;
    return 0;

}
