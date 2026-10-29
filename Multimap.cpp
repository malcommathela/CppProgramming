//
// Created by malco on 10/29/2026.
//
#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> students;

    // Insert multiple values with same key
    students.insert({1, "Alice"});
    students.insert({2, "Bob"});
    students.insert({1, "Charlie"});  // duplicate key allowed
    students.insert({3, "David"});

    cout << "All students:\n";
    for (auto it = students.begin(); it != students.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // Find all values for a given key
    int key = 1;
    auto range = students.equal_range(key);
    cout << "\nStudents with roll number " << key << ":\n";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << endl;
    }

    return 0;
}
