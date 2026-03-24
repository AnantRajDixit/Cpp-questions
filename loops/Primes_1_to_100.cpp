//Print All Primes from 1–100
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return false;
    return true;
}

int main() {
    cout << "Primes from 1–100:\n";
    for(int i = 2; i <= 100; i++)
        if(isPrime(i)) cout << i << " ";
    return 0;
}
