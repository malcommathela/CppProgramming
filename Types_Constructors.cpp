//
// Created by malco on 08/07/2026.
//

#include <iostream>
using namespace std;


// Default Initialization of Data Members

class Student {	int roll;
    public:
    Student() {     roll =0 ; // Default Constructor
        cout << "Roll No." << roll;
    }
    void show() {
        cout << "Roll No." << roll;
    }
};

// Parameterized Initialization

class Student {
    int roll;
    public:
    Student(int r) { // Parameterized Constructor
        roll = r;
    }
    void show()
    {   cout << "Roll Number: " << roll << endl;
    }
};





