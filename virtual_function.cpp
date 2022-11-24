#include <bits/stdc++.h>

using namespace std;

class BaseClass {
public:
    virtual void print() {
        cout << "Print!" << endl;
    }

    void show() {
        cout << "Class Executed!" << endl;
    }
};

class DerivedClass: public  BaseClass {
public:
    void print() {
        cout << "This is derived Class\nThe print() function is overwritten!\n";
    }

    void show() {
        cout << "This is derived c" << endl << "show() method is overwritten!" << endl;
    }
};

class DerivedDerivedClass: public DerivedClass {
public:
    void print() {
        cout << "Printing derivedDerivedClass" << endl;
    }
    void show() {
        cout << "Showing derivedDerivedClass" << endl;
    }
};

int main() {
    BaseClass* classPtr;
    DerivedDerivedClass dDObj;
    classPtr = &dDObj;

    classPtr->print();
    classPtr->show();

    return 0;
}