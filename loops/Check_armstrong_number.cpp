//Check Armstrong number.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;

    int digits = log10(n) + 1;
    while(temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    cout << (sum == n ? "Armstrong" : "Not Armstrong");
    return 0;
}
