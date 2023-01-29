#include <bits/stdc++.h>

using namespace std;

void max(int x, int y, int z) {
    if (x > y and x > z) {
        cout << "Ans: " << x << endl;
        return;
    }
    else if (y > x and y > z) {
        cout << "Ans: " << y << endl;
        return;
    }
    else {
        cout << "Ans: " << z << endl;
        return;
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    max(a, b, c);
}