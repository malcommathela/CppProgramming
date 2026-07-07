//
// Created by malco on 07/07/2026.
//

#include <iostream>
using namespace std;

class Bank {
private:
    string name;
    float balance;

public:

    Bank (string n, float b) {
        name = n;
        balance = b;
    }

    void setName (string n) {
        name = n;
    }

    void viewBalance() {
        cout<< '$' << balance <<endl;
    }

    void deposit(float amount) {
        if (amount <= 0) cout << "You cannot make such a deposit, Try again..." << endl;
        else {
            balance += amount;
            cout << "You have deposited " << '$'<< amount<< endl;
        }
    }

    void withdraw(float amount) {
        if (amount > balance) cout << "Insufficient funds" << amount << endl;
        else {
            balance -= amount;
            cout << "You have withdrew " << '$'<< amount << endl;
        }
    }

};

int main() {
    Bank b("Loki", 890);
    b.viewBalance();
    b.withdraw(800);
    b.viewBalance();


}
