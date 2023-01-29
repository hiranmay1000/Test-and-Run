#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subset(vector<int>& arr) {
    vector<vector<int>> powerSet;
    vector<int> sub;

    int totalSubsets = 1 << arr.size();

    for (int i = 0; i < totalSubsets; i++) {
        for (int j = 0; j < arr.size(); j++) {
            if (i & (1 << j)) {
                sub.push_back(arr[j]);
                // cout << arr[j] << " ";
            }
        }
        cout << endl;
        powerSet.push_back(sub);
        sub.clear();
    }

    return powerSet;
}

int main() {
    vector<int> v = { 1,2,3 };
    vector<vector<int>> ans = subset(v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "{";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
            if (j < ans[i].size() - 1) {
                cout << ", ";
            }
        }
        cout << "}" << endl;
    }

}