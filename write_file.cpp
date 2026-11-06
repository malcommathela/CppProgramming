//
// Created by malco on 11/06/2026.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("student.txt");

    if (!file) {
        cout << "Unable to create file!" << endl;
        return 1;
    }

    file << "Name: John\n";
    file << "Age: 20\n";

    file.close();

    cout << "Data written successfully." << endl;
    return 0;
}
