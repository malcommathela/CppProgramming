//
// Created by malco on 08/07/2026.
//

#include <iostream>
using namespace std;

class Demo {
    public:
        Demo() {
            cout << "Default Constructor " << endl;
        }
        Demo(int x) {
            cout << "One argument Constructor " << x << endl;
        }
        Demo(char str[12]) {
            cout << "One argument string Constructor " << str << endl;
        }
    ~Demo() {
            cout << "Destructor" << endl;
        }
};

int main() {
    Demo obj;
    Demo obj1(10);
    Demo obj2("masks");
    return 0;
}
