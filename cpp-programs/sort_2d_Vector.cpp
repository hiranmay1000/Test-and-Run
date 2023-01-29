#include <bits/stdc++.h>
using namespace std;

bool sortFirstCol(vector<int>& v1, vector<int>& v2) {
    return v1[0] < v2[0];
}

int main() {
    vector<vector<int>> v = {
    {1,2}, {3, 5}, {6,7}, {8,10},
    };
    
    sort(v.begin(), v.end(), sortFirstCol);

    for (auto i : v) {
        for (auto j : i) {
            cout << j << "\t";
        }
        cout << endl;
    }
}