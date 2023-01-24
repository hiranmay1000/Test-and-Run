#include <bits/stdc++.h>
using namespace std;

class Stud {
    int roll;
    string name;
public:
    void getdata() {
        cout << "Enter Name: ";
        cin >> this->name;
        cout << "Roll: ";
        cin >> this->roll;
    }

    void putdata() {
        cout << "Name: " << this->name << endl;
        cout << "Roll: " << this->roll << endl;
    }

    static int studentCount;
    Stud() {
        studentCount++;
    }

};

int Stud::studentCount = 0;

int main()
{
    Stud s1, s2;

    s1.getdata();
    s2.getdata();

    cout << endl;
    s1.putdata();
    s2.putdata();

    cout << "Total student: " << Stud::studentCount << endl;
}