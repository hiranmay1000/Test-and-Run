#include <bits/stdc++.h>
using namespace std;

void multiply(int& n, int& m) { // passing address of the variables
    n = n + m;
    m = n - m;
    n = n - m;
}

int main() {
    int n = 0;
    int m = 4;

    multiply(n, m);
    cout << n << " " << m << endl;
}