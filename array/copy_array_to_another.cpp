//Copy one array into another.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr1[n];
    int arr2[n];
    cout<<"The elements of arr1: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    cout<<"The exchanged array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr2[i]<< " ";
    }
    
    return 0;
}
