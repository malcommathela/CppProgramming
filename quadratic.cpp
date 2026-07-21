//
// Created by malco on 07/16/2026.
//


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "Not a quadratic equation\n";
        return 0;
    }

    double d = b * b - 4 * a * c;

    if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    } else if (d == 0) {
        double x = -b / (2 * a);
        cout << "Roots are real and equal:\n";
        cout << "x = " << x << "\n";
    } else {
        double real = -b / (2 * a);
        double imag = sqrt(-d) / (2 * a);
        cout << "Roots are complex:\n";
        cout << "x1 = " << real << " + " << imag << "i\n";
        cout << "x2 = " << real << " - " << imag << "i\n";
    }

    return 0;
}