#include<iostream>
using namespace std;

class Bank {
protected:
    string name;
    int balance;
public:
    void deposit() {
        int x;
        cout << "Deposit amount: ";
        cin >> x;
        balance += x;
    }

    void withdraw() {
        int x;
        cout << "Withdraw amount: ";
        cin >> x;
        balance -= x;
    }

    void checkBal() {
        cout << "Available amount: " << balance << endl;
    }
};

class Atm: public Bank {
public:
    void runMachine() {
        deposit();
        if (balance > 5000) {
            withdraw();
            checkBal();
        }
        else
            cout << "Try again!" << endl;
    }
};

int main()
{
    Atm _atm;
    _atm.runMachine();
    _atm.checkBal();
    return 0;
}