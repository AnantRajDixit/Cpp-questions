//Find largest element in array.
#include<iostream>
using namespace std;

int main(){

    int arr[5] = {10,25,34,14,54};
    int n = sizeof(arr)/ sizeof(arr[0]);

    int largest = arr[0]; //Assuming the first element is the largest
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i]; //If the bigger element is found
        }
        
    }

    cout<<"The largest element in the array is: "<< largest<<endl;

    return 0;
    
}
