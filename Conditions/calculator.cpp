//Create simple calculator using switch case.

#include<iostream>
using namespace std;

int main() {
    char op;        // to store operator
    int a, b;       // to store numbers

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (op) {
        case '+':
            cout << "Result = " << a + b;
            break;

        case '-':
            cout << "Result = " << a - b;
            break;

        case '*':
            cout << "Result = " << a * b;
            break;

        case '/':
            if (b != 0) {
                cout << "Result = " << a / b;
            } else {
                cout << "Error: Division by zero";
            }
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}
