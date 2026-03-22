//Count digits in number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count = 0;  // declare and initialize count

    if (n == 0) {
        count = 1;  // special case for 0
    } else {
        while (n > 0) {
            count++;
            n = n / 10;
        }
    }



    cout<<"Number of counts: "<< count<<endl;
    return 0;
    
}
