#include <bits/stdc++.h>

using namespace std;

class Employee {
    string name;
    char id[40];
    double salary;
public:
    void setData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter id: ";
        cin >> this->id;
        cout << "Enter salary: ";
        cin >> this->salary;
    }

    void getData() {
        cout << "Name\t\t: " << name << endl;
        cout << "ID\t\t: " << id << endl;
        cout << "Salary\t\t: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter no of employee: ";
    cin >> n;
    Employee em[n];

    for (int i = 0; i < n; i++)
        em[i].setData();

    cout << "\n------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        em[i].getData();
        cout << endl;
    }
    cout << "------------------------------" << endl;


    return 0;
}