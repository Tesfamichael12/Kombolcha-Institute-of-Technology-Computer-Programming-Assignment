#include <iostream>
using namespace std;

int main(){
    // Half Pyramid
    cout << "\nA:\n";
    for (int i = 1; i <= 5; i++){
        for (int j = 0; j < i; j++){
            cout << "*"; 
        }
        cout << endl;
    }

    // Inverted Half Pyramid with nubmers
    cout << "\nB:\n";
    for (int i = 5; i >= 1; i--){
        for (int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }

    // Half pyramid 
    cout << "\nC:\n";
    for (int i = 0; i <= 5; i++){
        for (int j = 0; j < 2*i+1; j++){
            cout << "*"; 
        }
        cout << endl;
    }

    // Full pyramid to the side
    cout << "\nD:\n";
    for (int i = 1; i <= 5; i += 2) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 3; i >= 1; i -= 2) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
}
