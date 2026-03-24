//Check if Number is Prime
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool prime = true;
    if(n <= 1) prime = false;
    else {
        for(int i = 2; i <= sqrt(n); i++)
            if(n % i == 0) { prime = false; break; }
    }

    cout << (prime ? "Prime" : "Not Prime");
    return 0;
}
