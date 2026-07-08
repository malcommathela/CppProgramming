//
// Created by malco on 07/08/2026.
//


#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person p;
    p.name = "Alice";
    p.age = 21;

    cout << p.name << " " << p.age << endl;
    return 0;
}