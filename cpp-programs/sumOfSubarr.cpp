#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> a = { 13, 9, 25 ,1 ,1 ,0, 22, 13 ,22 ,20, 3, 8, 11, 25, 10, 3, 15, 11, 19, 20, 2, 4, 25, 14, 23, 14 };
    // int n = sizeof(a) / sizeof(a[0]);

    // int v[n] = {};

    // vector<int> ans;
    // int a[n] = {};

    // for (int i = 0;i < n;i++) {
    //     v[a[i]]++;
    // }
    // for (int i = 0;i < n;i++) {
    //     if (v[i] > 1) {
    //         ans.push_back(i);
    //     }
    // }

    vector<int> arr = { 1, 4, 5, 2, 7, 8, 3, };
    int n = arr.size();

    int a = 2;
    int b = 5;

    map<int, int> mp;

    for (auto it : arr) {
        mp[it]++;
    }

    for (auto it : mp) {
        cout << it.first << "\t" << it.second << endl;
    }

    int count = 0;
    int minus = (b - a) + 1;

    for (auto it : mp) {
        if (it.first >= a and it.first <= b) {
            cout << it.first << " ";
            count++;
        }
    }

    cout << endl;

    if (count == minus) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }



    cout << endl;
}