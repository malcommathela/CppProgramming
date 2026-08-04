//
// Created by malco on 08/04/2026.
//

#include <iostream>
using namespace std;

class Array {
    int *arr;
    int size;

    public:
    Array(int s) {
        size = s;
        arr = new int[size];
    }

    void input() {
        cout << "Enter " << size << " elements: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Array Elements: " << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    }

    ~Array() {
        delete[] arr;
        cout << "Memory Deallocated...." << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    Array arr(n);
    arr.input();
    arr.display();
    return 0;
}
