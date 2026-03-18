//Check if character is vowel or consonant.

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
    ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')     // Need to address each and every character differently
    {
        cout<<"It is a vowel";
    }
    else
    {
        cout<<"It is a consonant";
    }
    return 0;
    
}
