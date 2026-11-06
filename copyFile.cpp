//
// Created by malco on 11/06/2026.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream destination("destination.txt");

    string line;

    if (!source || !destination) {
        cout << "Error opening file." << endl;
        return 1;
    }

    while (getline(source, line)) {
        destination << line << endl;
    }

    source.close();
    destination.close();

    cout << "File copied successfully." << endl;
    return 0;
}