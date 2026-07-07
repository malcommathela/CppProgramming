//
// Created by malco on 07/07/2026.
//

// using namespace in C++ is a directive that lets you use names from a namespace without writing the namespace prefix every time.
// For example, using namespace std; lets you write cout instead of std::cout.
//
// What it does
// Namespaces group related names like functions, classes, and variables so they do not conflict with each other.
// The using namespace directive brings all names from that namespace into the current scope.

#include <iostream>
using namespace std;

int main() {
    cout << "Hello";
    return 0;
}