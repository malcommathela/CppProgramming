//
// Created by malco on 07/07/2026.
//

#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << a + b << endl;
}

int main() {
    int a;
    cout << "Enter a: " << endl;
    cin >> a;
    int b;
    cout << "Enter b: " << endl;
    cin >> b;
    add(a, b);
    return 0;
}
