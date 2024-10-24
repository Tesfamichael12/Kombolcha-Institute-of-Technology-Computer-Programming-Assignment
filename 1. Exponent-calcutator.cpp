#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    lable:
    cout << "Enter a number: ";
    cin >> n;
    if (isdigit(n)){
        cout << "Please enter a valid number" << endl;
        goto lable;
    }
    else{
        cout << "Power of 2 (2^n): " << pow(2, n) << endl;
    }
}