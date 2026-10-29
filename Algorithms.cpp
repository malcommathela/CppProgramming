//
// Created by malco on 10/29/2026.
//

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    list<int> nums = {30, 10, 50, 20};

    nums.sort();  // list has its own sort()

    cout << "Sorted list: ";
    for (int n : nums) cout << n << " ";
    return 0;
}

