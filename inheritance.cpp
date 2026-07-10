//
// Created by malco on 07/10/2026.
//

#include <iostream>
#include <ostream>
using namespace std;

class Shape {
    public:
        void draw() {
            cout << "Draw a shape" << endl;
        }
};

class Circle : public Shape {
    public:
    void draw() {
        cout << "Draw a Circle" << endl;
    }
};

class Rectangle : public Shape {
    public:
    void draw() {
        cout << "Draw a Rectangle" << endl;
    }
};

class Triangle : public Shape {
    public:
    void draw() {
        cout << "Draw a Triangle" << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    Triangle t;

    c.draw();
    r.draw();
    t.draw();
    return 0;
}
