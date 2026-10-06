//
// Created by malco on 10/05/2026.
//

#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) : value(v) {};
    Number operator-() {
        return Number(-value);
    }
    void display() {
        cout << value << endl;
    }
};

int main() {
    Number num(10);
    cout<< "Original number: ";
    num.display();

    Number res = -num;
    cout << "Number after unary minus: ";
    res.display();
    return 0;

}
