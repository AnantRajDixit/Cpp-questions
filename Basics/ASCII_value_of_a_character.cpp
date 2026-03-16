//Print ASCII value of a character.
#include<iostream>
using namespace std;

  // Faced issue: Initially, I was confused about how to approach
    // these types of questions. My approach was wrong because I tried
    // to directly manipulate characters without realizing that each
    // character has an underlying ASCII integer value.
    // Correct approach: Cast the character to int to see its ASCII code.

int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    
    cout<<"The ASCII value of "<<ch<< " is:"<< (int)ch<<endl;

    return 0;

}
