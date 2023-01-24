#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

class Branch {
    float minimum_bal = 10000;
    int count;
    string unique_id;

    struct account_holder
    {
        string name, id;
        float bal;
    }account_holder[10];
public:
    Branch() {
        count = 0;
    }

    void choice();
    void inputNewAccountHolder();
    void checkBal();
    void borrowing();
    void updateAccountHolder();
    void transaction();
    void fine();
    void show();
};

void Branch::choice() {
    int choice;
    while (1)
    {
        cout << "1. Create Account" << endl;
        cout << "2. Balance: " << endl;
        cout << "3. Borrowing: " << endl;
        cout << "4. Update existing account information: " << endl;
        cout << "5. View account holder list: " << endl;
        cout << "6. Transaction: " << endl;
        cout << "0. Exit: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            inputNewAccountHolder();
            break;
        case 2:
            checkBal();
            break;
        case 3:
            borrowing();
            break;
        case 4:
            Branch::updateAccountHolder();
            break;
        case 5:
            show();
            break;
        case 6:
            transaction();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "Invalid option chosen!" << endl;
            break;
        }
    }
}

void Branch::inputNewAccountHolder() {
    if (count > 10) {
        cout << "Insufficient storage!" << endl;
        return;
    }

    cout << "\t\tEnter data of person " << count + 1 << endl;
    cout << "\t\tId\t\t: ";
    cin >> account_holder[count].id;

    for (int i = 0; i < count; i++)
    {
        if (account_holder[i].id == account_holder[count].id) {
            cout << "\n\t\tThis ID is not available, try again!!!\n" << endl;
            return;
        }
    }
    cout << "\t\tName\t\t: ";
    cin >> account_holder[count].name;
    cout << "\t\tBalance\t\t: ";
    cin >> account_holder[count].bal;
    if (account_holder[count].bal < minimum_bal) {
        cout << "\n[Minimum balance required rs. 5000 to create account!!!]" << endl;
        cout << "Unsuccessful\n" << endl;
        return;
    }
    cout << "\t\tSuccessful" << endl;
    count++;
}

void Branch::fine() {
    for (int i = 0; i < count; i++)
    {
        if (account_holder[i].bal < minimum_bal) {
            account_holder[i].bal -= 500;
            cout << "Fine imposed: Rs. 500" << endl;
        }
        cout << endl;
    }
}

void Branch::transaction() {
    if (count < 0) {
        cout << "No data available!" << endl;
    }

    cout << "Enter ID: ";
    cin >> unique_id;
    for (int i = 0; i < count; i++)
    {
        if (unique_id == account_holder[i].id || account_holder[i].name == unique_id) {
            cout << "Name: " << account_holder[i].name << endl;
            cout << "Id: " << account_holder[i].id << endl;
            cout << "Balance: " << account_holder[i].bal << endl;

            cout << "\n\t\t1. Withdraw\n\t\t2. Deposit: \t\t" << endl;
            double money;
            int choice;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Withdraw amount: ";
                cin >> money;
                if (account_holder[i].bal > money) {
                    account_holder[i].bal -= money;
                    cout << "Available bal: " << account_holder[i].bal << endl;
                    cout << "Successful" << endl;
                }
                else
                    cout << "Insufficient Funds" << endl;
                break;
            case 2:
                cout << "Deposit money: ";
                cin >> money;
                account_holder[i].bal += money;
                cout << "Available bal: " << account_holder[i].bal << endl;
                cout << "Successful" << endl;
                break;
            case 0:
                return;
                break;
            default:
                cout << "Please enter either [1] or [2] only! and [0] to cancel" << endl;
                break;
            }
        }
        else if (unique_id != account_holder[i].id) {
            cout << "\nNo data account found in the database.\n" << endl;
        }
    }
}

void Branch::show() {
    cout << "\n-----------------------------------------\n\n";
    for (int i = 0; i < count; i++)
    {
        cout << "Account holder\t: [" << i + 1 << "]" << endl;
        cout << "Name\t\t: " << account_holder[i].name << endl;
        cout << "Id\t\t: " << account_holder[i].id << endl;
        cout << "Balance\t\t: " << account_holder[i].bal << endl;
        if (account_holder[i].bal < minimum_bal) {
            cout << "Fine imposed\t: 500" << endl;
        }
        cout << endl;
    }
    cout << "-----------------------------------------\n";
}

void Branch::updateAccountHolder() {
    if (count < 0) {
        cout << "No data available!" << endl;
    }

    cout << "Enter id or name: ";
    cin >> unique_id;
    for (int i = 0; i < count; i++)
    {

        string customerNameLowerCase = account_holder[i].name;
        transform(customerNameLowerCase.begin(), customerNameLowerCase.end(), customerNameLowerCase.begin(), ::tolower);

        if (unique_id == account_holder[i].id || account_holder[i].name == unique_id || customerNameLowerCase == unique_id) {
            cout << "\n----------------------------------------------------------------\n";
            cout << "\t\t\t[PREVIOUS DATA]" << endl << endl;
            cout << "\t\tName\t\t: " << account_holder[i].name << endl;
            cout << "\t\tId\t\t: " << account_holder[i].id << endl;
            cout << "\t\tBalance\t\t: " << account_holder[i].bal << endl << endl;

            cout << "\t\t\t[UPDATE DATA]\t\t" << endl << endl;
            cout << "\t\tName\t\t: ";
            cin >> account_holder[i].name;
        again:
            cout << "\t\tId\t\t:";
            cin >> account_holder[i].id;
            for (int j = 0; j < count; j++)
            {
                if (account_holder[i].id == account_holder[j].id) {
                    cout << "\nThis ID is not available, try again!!!\n" << endl;
                    goto again;
                }else{
                    break;
                }
            }
            cout << "\t\tBalance\t\t: ";
            cin >> account_holder[i].bal;
            cout << "\n------------------------------COMPLETE-----------------------------\n";
        }
        else if (unique_id != account_holder[i].id) {
            cout << "\nNo data account found in the database.\n" << endl << endl;
        }
    }
};

void Branch::checkBal() {
    cout << "Enter id or name of the customer:";
    cin >> unique_id;

    for (int i = 0; i < count; i++)
    {
        string customerNameLowerCase = account_holder[i].name;
        transform(customerNameLowerCase.begin(), customerNameLowerCase.end(), customerNameLowerCase.begin(), ::tolower);

        if (unique_id == account_holder[i].id || account_holder[i].name == unique_id || customerNameLowerCase == unique_id) {
            cout << "Name: " << account_holder[i].name << endl;
            cout << "Available balance: " << account_holder[i].bal << endl;
        }
        else {
            cout << "\nNo data found in the database!!!\n" << endl;
        }
    }
}

void Branch::borrowing() {

};

int main() {
    Branch Bank;
    Bank.choice();
}