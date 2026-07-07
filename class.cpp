//
// Created by malco on 07/07/2026.
//

#include <iostream>
using namespace std;

class Bank {
private:
    string name;
    float balance;
    int pin = -1;

public:

    Bank (string n, float b) {
        name = n;
        balance = b;
    }

    void setName (string n) {
        name = n;
    }

    void setPin(int n) {
        if (pin == -1) {
            pin = n;
        }
        else {
            cout << "Pin already set"<< endl;
        }
    }

    bool verifyPin () {
        int p;
        cout << "Enter pin: ";
        cin >> p;
        if (p != pin) {
            cout << "Please enter valid pin: ";
            return false;
        }
        return true;
    }

    void viewBalance() {
        if (verifyPin()) cout<< '$' << balance <<endl;
    }

    void deposit(float amount) {
        if (verifyPin()) {
            if (amount <= 0) cout << "You cannot make such a deposit, Try again..." << endl;
            else {
                balance += amount;
                cout << "You have deposited " << '$'<< amount<< endl;
            }
        }
    }

    void withdraw(float amount) {
        if (verifyPin()) {
            if (amount > balance) cout << "Insufficient funds" << amount << endl;
            else {
                balance -= amount;
                cout << "You have withdrew " << '$'<< amount << endl;
            }
        }
    }

};

int main() {
    Bank b("Loki", 890);
    b.setPin(890);
    b.viewBalance();
    b.withdraw(800);
    b.viewBalance();


}
