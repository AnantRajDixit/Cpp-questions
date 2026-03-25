//Reverse an array.

#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout<< " The reversed array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";

    }
    cout<< endl;

    return 0;
    
    
}
