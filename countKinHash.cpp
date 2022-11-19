#include <bits/stdc++.h>
using namespace std;

int main() {
    int v[] = { 1, 7, 4, 3, 4, 8, 7 };
    int n = sizeof(v) / sizeof(v[0]);
    int k = 2;

    map<int, int> mp;

    for (auto i : v) {
        mp[i]++;
        if (mp[v[i]] == k) {
            cout << v[i];
            break;
        }
    }


    cout << endl;
}