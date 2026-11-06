//
// Created by malco on 11/06/2026.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("student.txt");
    string line;

    if (!file) {
        cout << "File not found!" << endl;
        return 1;
    }

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}