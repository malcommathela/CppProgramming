//
// Created by malco on 10/29/2026.
//
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40};

    auto it = find(s.begin(), s.end(), 30);  // uses iterators
    if (it != s.end())
        cout << "Found: " << *it << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
