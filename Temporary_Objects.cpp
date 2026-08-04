//
// Created by malco on 08/04/2026.
//

#include <iostream>
using namespace std;

class Demo {
    public:
    Demo() {
        cout << "Constructor Called...." << endl;
    }
};

int main() {
    Demo();
    cout << "Main function ends....." << endl;
    return 0;
}
