#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int>v1 = { 4, 1, 5 };
    map <int, int> mp;

    int n = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        n += v1[i];
        if (i < v1.size() - 1)
            n *= 10;

    }

    cout << n << endl;
}