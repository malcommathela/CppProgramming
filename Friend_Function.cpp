//
// Created by malco on 08/07/2026.
//

#include <iostream>
using namespace std;

class Demo {
private:
    int x, y;
    void display() {
        cout << "I am inside display() member function inside the Demo Class" << endl;
    }
    friend void add(Demo obj);
};

void add(Demo obj) {
    obj.x = 10;
    obj.y = 20;
    cout << "Sum: " << obj.x + obj.y << endl;
}

int main() {
    Demo obj;
    add(obj);
    return 0;
}

