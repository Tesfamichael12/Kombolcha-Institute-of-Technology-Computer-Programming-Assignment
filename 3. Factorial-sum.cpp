#include <iostream>
using namespace std;

int factorial(int x){
    if (x == 1 || x == 0) return 1;

    return x * factorial(x - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += factorial(i);
    }

    cout << "Sum of factorial is: " << sum << endl;
}