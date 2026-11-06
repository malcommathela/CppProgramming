//
// Created by malco on 11/06/2026.
//
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("student.txt", ios::app);

    if (!file) {
        cout << "Unable to open file!" << endl;
        return 1;
    }

    file << "Course: Computer Science\n";

    file.close();

    cout << "Data appended successfully." << endl;
    return 0;
}