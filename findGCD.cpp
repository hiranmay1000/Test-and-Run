#include <bits/stdc++.h>
using namespace std;

void isGCD(int a, int b) {
    isGCD(a - b, b);
    if (a == 0) {
        return;
    }
}
int main() {
    int m = 72;
    int n = 24;

    isGCD(m, n);
    cout << n << " " << m << endl;
}