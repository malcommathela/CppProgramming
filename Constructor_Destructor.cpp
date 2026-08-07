//
// Created by malco on 08/07/2026.
//


#include <iostream>
using namespace std;

class Demo {
    public:
    Demo() {
        cout << "Demo constructor" << endl;
    }
    ~Demo() {
        cout << "Demo deconstructor" << endl;
    }
    void display() {
        cout << "Demo display" << endl;
    }
};
int main() {
    {
        Demo demo; // Constructor will be called
        demo.display();
    } // Destructor will be called automatically when obj goes out of scope

    cout << "Back to main function" << endl;

    return 0;
}
