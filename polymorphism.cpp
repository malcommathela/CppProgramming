//
// Created by malco on 07/10/2026.
//

#include <iostream>
using namespace std;

class Animal {
    public:
    virtual void sound() {
        cout << "Some Sound!!!" << endl;
    }
};

class Dog : public Animal {
    public:
    virtual void sound() {
        cout<<"Dog Bark" << endl;
    }
};

int main() {
    Dog d;
    d.sound();
    Animal a;
    a.sound();
    return 0;
}
