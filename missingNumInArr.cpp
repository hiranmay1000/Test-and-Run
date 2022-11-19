#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if(mp.find(arr[i])==)
        cout <<  << " ";
    }

    cout << endl;

    int j = 1;
    for (int i = 0; i < n; i++)
    {
        if (mp[i] != j) {
            cout << j;
            break;
        }
        j++;
    }

    cout << endl;
    return 0;
}