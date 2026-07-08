//
// Created by malco on 07/08/2026.
//

// In C++, a map is an associative container that stores key-value pairs with unique keys and
// keeps them sorted by key. It is defined in the <map> header.

// Basic idea
// Each element has a key and a value.
// Keys are unique, so you cannot store duplicate keys.
// Lookup, insertion, and deletion are generally O(logn)
// because std::map is typically implemented as a balanced tree.

// Common operations
// m[key] accesses or inserts the value for key.
//
// m.find(key) checks whether a key exists without inserting it.
//
// m.erase(key) removes an element.
//
// m.size() gives the number of elements.


#include <iostream>
#include <map>
using namespace std;

int main () {
    std::map<string, int> age;
    age["Max"] = 35;
    age["Alice"] = 21;
    age["Bob"] = 22;
    age["Mar"] = 23;

    auto it = age.find("Alice");
    if (it != age.end()) {
        cout << it->first << " " << it->second << endl;
    }
    age.erase("Bob");

    cout << "Size: " << age.size() << endl;


}