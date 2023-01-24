#include<iostream>
using namespace std;

int val = 0;

class A {
public:
    A() {
        cout << ++val << " ";
    };

    ~A() {
        cout << val-- << " ";
    }
};

int main()
{
    A ob1, ob2, ob3;
    {
        A obj4;
    }

    return 0;
}