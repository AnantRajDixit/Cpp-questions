//Count even numbers in array
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< " give size of array: ";
    cin >> n;
    int arr[n] ;
    for (int i = 0; i < n; i++){
        cin>> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
    {
        cout<<"The even number is: "<< arr[i]<< endl;
    }else
    { 
        cout<<"It is not an even number"<<endl;
    }
}
// for (int i = 0; i < n; i++){
//         cout<< arr[i];
//     }

    return 0;
    
}
