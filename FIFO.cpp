//
// Created by malco on 10/25/2026.
//
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.pop();
    cout << "After pop, front: " << q.front() << endl;

    return 0;
}
