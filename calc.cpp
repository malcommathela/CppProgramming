//
// Created by malco on 05/22/2026.
//

#include "calc.h"
#include <iostream>


using namespace std;

void prompt () {
    cout << "Choose Your computation" << endl;
    cout << "Add (+) " << endl;
    cout << "Sub (-) " << endl;
    cout << "Mul (*) " << endl;
    cout << "Div (/) " << endl;
    cout << "Mod (%) " << endl;
    cout << "Exit (x) " << endl;
}

int main () {
    cout << "Welcome to the Calculator" << endl;
    while (true) {
        prompt ();
        char choice;
        cin >> choice;
        if (choice == 'x') break;
        int a = 0, b = 0;
        cout << "Enter num1" << endl;
        cin >> a;
        cout << "Enter num2" << endl;
        cin >> b;

        switch (choice) {
            case '+':
                cout << "Result: " << a + b << endl;
                break;
            case '-':
                cout << "Result: " << a - b << endl;
                break;
            case '*':
                cout << "Result: " << a * b << endl;
                break;
            case '/':
                cout << "Result: " << a / b << endl;
                break;
            case '%':
                cout << "Result: " << a % b << endl;
                break;
            case 'x':
                return 0;
            default:
                cout << "Invalid Choice, Try again" << endl;
        }

    }
    return 0;

}

