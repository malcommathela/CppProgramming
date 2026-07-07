//
// Created by malco on 07/07/2026.
//


// In C++, strings are used to store and work with text.
// The modern way is std::string, which is an object type from the <string> library
// and is easier to use than old C-style character arrays.


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Original: " << name << endl;
    cout << "Length: " << name.length() << endl;

    if (!name.empty()) {
        name[0] = toupper(name[0]);
    }
    cout << "Modified: " << name << endl;
    return 0;

    // std::string s = "Hello World!";
    // string c = "I am Atomic";
    // cout << s << endl;
    // cout << s.length() << endl;
    // cout << s.substr(0, 5) << endl;
    // string t = s.append(c); // s+c
    // cout << t.size() << endl;


}

