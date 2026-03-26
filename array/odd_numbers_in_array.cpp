//Count odd numbers in array.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0 )
        {
            cout<<"It is an odd number  "<<endl;   
        }
        else
        {
            cout<<"It is an even number"<<endl;
          
        }
    }
    
    return 0;
    
    
}
