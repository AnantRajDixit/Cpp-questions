//Print Fibonacci series.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

   int first = 0, second = 1; // Initializing the first and the second term
   cout<<"Fibonacci Series: ";
   for (int i = 0; i < n; i++)
   {
    cout<< first<< " ";
    int next = first + second;
    first = second;
    second = next;
   }
   
    cout<<endl;

    return 0;
}
