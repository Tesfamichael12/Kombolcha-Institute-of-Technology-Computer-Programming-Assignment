#include <iostream>
using namespace std;

int main() {
    int sum1 = 0, sum2 = 0, sum3 = 0, product = 1;
    int n;

    // A. 1+2+3+…+100
    for (int i = 1; i <= 100; i++) {
        sum1 += i;
    }
    cout << "Sum A: 1 + 2 + ... + 100 = " << sum1 << endl;

    // B. 5 + 10 + 15 + ... + n
    cout << "Enter the value of n for B: ";
    cin >> n;
    for (int i = 5; i <= n; i += 5) {
        sum2 += i;
    }
    cout << "Sum B: 5 + 10 + ... + " << n << " = " << sum2 << endl;

    // C. 2 + 4 + 6 + ... + n
    cout << "Enter the value of n for C: ";
    cin >> n;
    for (int i = 2; i <= n; i += 2) {
        sum3 += i;
    }
    cout << "Sum C: 2 + 4 + ... + " << n << " = " << sum3 << endl;

    // D. 1 * 3 * 5 * ... * 20
    for (int i = 1; i <= 20; i += 2) {
        product *= i;
    }
    cout << "Product D: 1 * 3 * ... * 19 = " << product << endl;

    return 0;
}
