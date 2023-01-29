#include <bits/stdc++.h>
// Given an integer m, find the biggest integer n that we can obtain with the same number of 0 and 1 as in the binary representation of m.
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    int x = 0;
    int y = 0;
    for (int i = 0; n != 0; i++) // deci to bin
    {
        int bit = n % 2;
        x = bit + x;
        x = pow(10, i);
        n /= 2;
    }
    cout << x << endl; // binary num
}