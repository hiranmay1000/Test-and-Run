#include <bits/stdc++.h>

using namespace std;

class Base {
    int a;
public:
    Base() {
        cin >> this->a;
    }
    friend class Derived;
};

class Derived {
public:
    void display(Base& t) {
        cout << "Value: " << t.a << endl;
    }
};

int main() {
    Base b;
    Derived d;

    d.display(b);
}