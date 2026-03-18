//Find grade of student using marks.

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter the merks: ";
    cin>>marks;
    
    if (marks>=90)
    {
        cout<<"Grade A";
    }
    else if(marks>=70)
    {
        cout<<"Grade B";
    }
    else if(marks>=50)
    {
        cout<<"Grade C";
    }
    else
    {
        cout<<"You have Failed";
    }
    return 0;
}
