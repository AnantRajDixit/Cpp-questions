//Check Strong Number.
#include <iostream>
using namespace std;

int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n-1);
}

int main() {
    int n, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;

    while(temp > 0) {
        int d = temp % 10;
        sum += factorial(d);
        temp /= 10;
    }

    cout << (sum == n ? "Strong" : "Not Strong");
    return 0;
}
