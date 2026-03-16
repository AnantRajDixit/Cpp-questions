//Calculate percentage of 5 subjects.
#include<iostream>
#include<string>
using namespace std;

int main(){
 double a, b, c, d, e;
 cout<<"Enter the marks of first subject: ";
 cin>>a;
  cout<<"Enter the marks of second subject: ";
 cin>>b;   
  cout<<"Enter the marks of third subject: ";
 cin>>c;   
  cout<<"Enter the marks of fourth subject: ";
 cin>>d;      
  cout<<"Enter the marks of fifth subject: ";
 cin>>e;      

double total = a+b+c+d+e;
double percentage = (total/500)*100;
cout<<"The percentage you scored is: "<<percentage<<"%"<<endl;

return 0;
}
