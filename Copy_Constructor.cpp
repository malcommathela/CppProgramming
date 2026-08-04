//
// Created by malco on 08/04/2026.
//

#include "Copy_Constructor.h"
#include <iostream>
using namespace std;

class Student {
    int roll;
    public:
        Student(int r) {
            roll = r;
        }
        Student(const Student &s) {
            roll = s.roll;
        }

        void show() {
            cout <<"Roll: "<<roll<<endl;
        }
};

int main() {
    Student s1(101);
    Student s2(s1);

    cout << "Original Object" << endl;
    s1.show();

    cout << "Copied Object" << endl;
    s2.show();

    return 0;
}

