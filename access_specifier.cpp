#include <bits/stdc++.h>
using namespace std;

class A {
protected:
    int a = 2;
public:
    void dis() {
        cout << this->a << endl;
    }
};

class B: A {
public:
    void dis() {
        cout << this->a << endl;
    }
};

int main()
{
    A _a;
    B _b;

    _a.dis();
    _b.dis();
}