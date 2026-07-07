//
// Created by malco on 07/07/2026.
//

// In C++, a vector is a dynamic array that can grow or shrink while the program runs.
// It stores elements of the same type and is part of the Standard Template Library.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 30, 50};

    arr.push_back(34);
    arr.push_back(20);

    cout << "First Element: " << arr.front() << endl; // arr[0]
    cout << "Size: " << arr.size() << endl;

    arr.pop_back();

    cout << "Size after pop: " << arr.size() << endl;

    return 0;

}

// Useful operations
// vector<int> v; creates an empty vector.
//
// v.push_back(x); adds an element to the end.
//
// v.pop_back(); removes the last element.
//
// v.size(); returns the number of elements.
//
// v.empty(); checks whether the vector has no elements.


