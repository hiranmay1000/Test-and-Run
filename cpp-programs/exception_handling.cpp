#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;

    cout << "Enter nums;";
    cin >> a >> b;

    try {
        if (b != 0) {
            c = a / b;
            cout << "Division: " << c << endl;
        }
        else {
            throw(b);
        }
    }
    catch (int b) {
        cout << "Value of is: " << b << " undefined" << endl;
    }

    return 0;
}