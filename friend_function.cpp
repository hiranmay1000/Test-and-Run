#include <bits/stdc++.h>
using namespace std;

class Box {
    int len;
    int bred;
public:
    void getdata(int len, int bred) {
        this->len = len;
        this->bred = bred;
    }
    friend int print(Box);
};

int print(Box b2) {
    return b2.len * b2.bred;
}

int main()
{
    Box b1;
    cout << print(b1) << endl;
}