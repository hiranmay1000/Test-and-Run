#include <bits/stdc++.h>
using namespace std;

int myPower(int base, int power)
{
    // base case;
    if(power == 0) return 1;

    return base * myPower(base, power-1);
}

int main()
{
    int base = 3;
    int power = 11;

    cout << myPower(base, power);
}