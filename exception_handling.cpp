#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 10;
    cout << "1st" << endl;
    try
    {
        if (x > 0)
            throw x;
        cout << "2nd" << endl;
    }
    catch (int a)
    {
        cout << "cought: " << a << endl;
        cout << "3rd" << endl;
    }

    cout << "4th" << endl;

    return 0;
}