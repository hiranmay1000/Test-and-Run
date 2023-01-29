#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n + 1];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (mx<a[i] and a[i]>a[i + 1]) {
            ans++;
        }
        mx = max(mx, a[i]);
    }

    cout << ans << endl;
}