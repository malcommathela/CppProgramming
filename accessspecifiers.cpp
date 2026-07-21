//
// Created by malco on 07/21/2026.
//

#include <iostream>
using namespace std;

class Student {

private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }
    void display() {
        cout << marks << endl;
    }
};

int main() {
    Student student;
    student.setMarks(5);
    student.display();
    return 0;
}
