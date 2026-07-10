//
// Created by malco on 07/10/2026.
//


// A virtual function in C++ is a member function in a base class that can be overridden in a
// derived class, and it lets C++ choose the correct version at runtime based on the actual object type.
// This is how C++ supports runtime polymorphism.
//
// Simple idea
// Without virtual, C++ decides which function to call at compile time.
// With virtual, it checks the real object type through a base-class pointer or
// reference and calls the derived version if it exists.

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a = new Dog();
    a->sound();   // Dog barks
    delete a;
}