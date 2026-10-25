//
// Created by malco on 10/25/2026.
//
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> st;

    st.push("C++");
    st.push("Java");
    st.push("Python");

    cout << "Top element: " << st.top() << endl;

    st.pop();
    cout << "After pop, top: " << st.top() << endl;

    return 0;
}
