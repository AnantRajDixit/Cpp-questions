//Find absolute value of number.

#include<iostream>
/* #include<cmath> // for abs() and fabs() */

using namespace std;

int main(){
    int a;
    cout<<"Enter an absolute value: ";
    cin>>a;
    int absvalue;

    if (a<0)
    {
        absvalue = -a;
    }
    else 
    {
        absvalue = +a;
    }
    
 /*   cout<<"abs(a) = "<<abs(a)<<endl; it was a direct method */

 cout<<"Absolute value of "<<a<<" is "<< absvalue<<endl;
 
    return 0;

}
