//Find smallest element in array.

#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,6767,545654,776,55};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int smallest = arr[0];

    for (int i = 1; i > n; i++)
    {
        if (arr[i]>smallest)
        {
            smallest = arr[i];
        }
        
    }
    cout<<"The smallest element is: "<< smallest<<endl;

    return 0;
    
}
