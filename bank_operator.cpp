#include <bits/stdc++.h>

using namespace std;

class Bank {
    int ac_no;
    string name;
    double balance;

public:
    void checkBal() {
        cout << balance << endl;
    }

    void deposit() {
        double x;
        cout << "Enter deposit amount: ";
        cin >> x;
        balance += x;
        cout << "Successful" << endl;
    }

    void withdraw() {
        cout << "Enter money to withdraw: ";
        double x;
        cin >> x;
        if (balance >= x) {
            balance -= x;
            cout << "Successful" << endl;
        }
        else {
            cout << "Insufficient fund" << endl;
        }
    }

    void runMachine();
};


class CurrentAc: public Bank {};
class SavingsAc: public Bank {};

void Bank::runMachine() {
    cout << "1. Current\n2. Savings\n";
    int x;
    cin >> x;

    while (1)
    {
        if (x == 1) {
            CurrentAc c;
            cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n";
            int y = 1;
            cin >> y;

            switch (y)
            {
            case 1:
                c.checkBal();
                break;
            case 2:
                c.deposit();
                break;
            case 3:
                c.withdraw();
                break;
            case 0:
                exit;
            default:
                break;
            }
        }
        else if (x == 2) {
            SavingsAc s;
            cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n";
            int y = 1;
            cin >> y;

            switch (y)
            {
            case 1:
                s.checkBal();
                break;
            case 2:
                s.deposit();
                break;
            case 3:
                s.withdraw();
                break;
            case 0:
                exit(0);
            default:
                break;
            }
        }
        else
            exit(0);
    }

}

int main() {

    Bank b;
    b.runMachine();

    return 0;
}