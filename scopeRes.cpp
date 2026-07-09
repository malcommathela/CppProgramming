//
// Created by malco on 07/09/2026.
//

#include <iostream>
using namespace std;
int x = 20;

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 10;
    cout <<"Inside: " << x << endl;
    cout << "Outside: " << ::x << endl;
    cout << "Sum: " << add(x, ::x) << endl;
    return 0;
}
