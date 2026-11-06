//
// Created by malco on 11/06/2026.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("student.txt");

    if (!file) {
        cout << "File not found!" << endl;
        return 1;
    }

    string line;
    int lines = 0, words = 0, characters = 0;

    while (getline(file, line)) {
        lines++;
        characters += line.length();

        bool inWord = false;

        for (char ch : line) {
            if (ch != ' ' && ch != '\t') {
                if (!inWord) {
                    words++;
                    inWord = true;
                }
            } else {
                inWord = false;
            }
        }
    }

    file.close();

    cout << "Lines: " << lines << endl;
    cout << "Words: " << words << endl;
    cout << "Characters: " << characters << endl;

    return 0;
}