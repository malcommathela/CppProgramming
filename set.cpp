//
// Created by malco on 07/07/2026.
//

#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> nums = {4,8,2,6};
    nums.insert(5);
    nums.insert(7);
    cout << "Current Elements" << endl;
    for (auto i : nums) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Length: " << nums.size() << endl;
    if (nums.find(10) != nums.end()) {
        cout << "To find 10: Found";
    } else {
        cout << "To find 10: Not found";
    }




    // set<int> s = {9,3,7,2,7,3};
    // for (auto i : s) {
    //     cout << i << " ";
    // }
    // return 0;
}
