#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<int, int> mp;
    int maxFreq = -1;

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    int idx = 0;

    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] > 1) {
            idx++;
            break;
        }
    }

    cout << idx << endl;
    cout << endl;

    return 0;
}