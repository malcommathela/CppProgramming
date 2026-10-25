//
// Created by malco on 10/25/2026.
//

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {10, 20, 30};

    numbers.push_front(5);   // Add at front
    numbers.push_back(40);   // Add at end

    cout << "List elements: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    numbers.remove(20);  // Remove element

    cout << "After removal: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    return 0;
}
