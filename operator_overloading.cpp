// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Com {
    int a;
    int b;
public:
    void setdata() {
        cout << "Enter a: ";
        cin >> this->a;
        cout << "Enter b: ";
        cin >> this->b;
    }

    void out() {
        cout << a << " + i" << b << endl;
    }

    Com operator + (const Com &ob) {
        Com temp;
        temp.a = this->a + ob.a;
        temp.b = this->b + ob.b;
        return temp;
    }
};

int main() {
    Com a, b, sum;
    a.setdata();
    b.setdata();
    sum = a + b;
    sum.out();
}