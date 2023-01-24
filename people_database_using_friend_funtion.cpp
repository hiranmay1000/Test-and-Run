#include<iostream>
using namespace std;

class Employee {
    char employee_name[20];
    int id; 

    friend void account();
    friend void show();
};

class Student {
    char student_name[20];
    int roll;

    friend void account();
    friend void show();
};

void account() {
    Employee em;
    cout << "Name: ";
    cin >> em.employee_name;
    cout << "Id: ";
    cin >> em.id;

    Student s;
    cout << "Name: ";
    cin >> s.student_name;
    cout << "Roll: ";
    cin >> s.roll;

}

void show() {
    Employee em;
    cout << "----------------------------------\n";
    cout << "Employee Name\t\t: " << em.employee_name << endl;
    cout << "Id\t\t\t: " << em.id << endl;

    Student s;
    cout << "Student Name\t\t: " << s.student_name << endl;
    cout << "Id\t\t\t: " << s.roll << endl;
    cout << "----------------------------------\n";
}

int main()
{
    account();
    show();
    return 0;
}