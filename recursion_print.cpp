#include <bits/stdc++.h>
using namespace std;
    
void out(int n) {
    if (n == 0) return;

    out(n - 1);
    cout << n;
    if (n != 5)
        cout << ", ";

    return;
}

int main() {
    int n;
    cin >> n;

    out(n);
}