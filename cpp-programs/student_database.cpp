#include <bits/stdc++.h>

using namespace std;

class Student {
public:
    string name;
    string roll;
    char section;

    void setStudentDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter section: ";
        cin >> section;
    }

    void getStudentDetails() {
        cout << "Name: \t\t\t" << name << endl;
        cout << "Roll: \t\t\t" << roll << endl;
        cout << "Section: \t\t" << section << endl;
    }
};

class Test: public Student {
public:
    int maths;
    int chem;
    int comp;

    void setData() {
        cout << "Enter maths marks: ";
        cin >> maths;
        cout << "Enter chem marks: ";
        cin >> chem;
        cout << "Enter comp marks: ";
        cin >> comp;
    }
};

class Result: public Test {
public:
    void getData() {
        int sum = this->maths + this->chem + this->comp;
        float percentage = (sum * 100 / 300);
        cout << "Total marks out of 300 is " << sum << endl;;
        cout << "Percentage: " << percentage << "%";
        if (percentage >= 40) {
            cout << " [Pass]";
        }
        else {
            cout << " [Fail]";
        }
    }
};

int main() {
    cout << "Enter no of students: ";
    int n;
    cin >> n;
    Result s[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Student -> " << i + 1 << endl;
        s[i].setStudentDetails();
        s[i].setData();
        cout << endl;
    }

    cout << "-------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Student No. [" << i + 1 << "]" << endl;
        s[i].getStudentDetails();
        s[i].getData();
        cout << endl << endl;
    }
    cout << "-------------------------------------";
}