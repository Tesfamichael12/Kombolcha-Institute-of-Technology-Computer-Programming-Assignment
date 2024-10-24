#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter an operation (e.g., 15 * 20): ";
    cin >> num1 >> op >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0)
                cout << "Cannot divide by zero!\n";
            else
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << op << " is an unrecognized operator.\n";
    }

    return 0;
}
