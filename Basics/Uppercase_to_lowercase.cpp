//Convert uppercase to lowercase.
#include<iostream>
#include<string>

using namespace std;
//I faced an issue regarding how to approach the code

int main(){
    char c;
    cout<<"Enter an uppercase letter: ";
    cin>>c;

    c +=32;

    cout<< "Lowercase: "<<c<<endl;

    return 0;

}
