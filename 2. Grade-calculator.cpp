#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        float mid, final, total;
        
        cout << "Enter midterm mark (0-40): ";
        cin >> mid;
        if(mid < 0 || mid > 40) {
            cout << "Please enter midterm marks between 0 and 40.\n";
            continue;
        }

        cout << "Enter final mark (0-60): ";
        cin >> final;
        if(final < 0 || final > 60) {
            cout << "Please enter final marks between 0 and 60.\n";
            continue;
        }

        total = mid + final;
        cout << "Total mark: " << total << endl;

        if (total > 90 && total <= 100) {
            cout << "Grade: A\n";
        } else if (total > 70 && total <= 90) {
            cout << "Grade: B\n";
        } else if (total > 50 && total <= 70) {
            cout << "Grade: C\n";
        } else if (total > 40 && total <= 50) {
            cout << "Grade: D\n";
        } else if (total >= 0 && total <= 40) {
            cout << "Grade: F\n";
        } else {
            cout << "Invalid input.\n";
        }

        cout << "Do you want to enter another grade? (y/n): ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');
    return 0;
}
