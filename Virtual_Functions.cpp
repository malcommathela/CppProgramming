#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual float area() = 0;  // Pure virtual function
    virtual void display() = 0;
};

// Derived classes
class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}
    float area() { return length * width; }
    void display() { cout << "Rectangle Area: " << area() << endl; }
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) : radius(r) {}
    float area() { return 3.14f * radius * radius; }
    void display() { cout << "Circle Area: " << area() << endl; }
};

class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) : base(b), height(h) {}
    float area() { return 0.5f * base * height; }
    void display() { cout << "Triangle Area: " << area() << endl; }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Rectangle(10, 5);
    shapes[1] = new Circle(7);
    shapes[2] = new Triangle(6, 4);

    for(int i = 0; i < 3; i++) {
        shapes[i]->display();
        delete shapes[i];
    }
    return 0;
}
