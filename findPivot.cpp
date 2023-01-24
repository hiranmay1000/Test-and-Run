#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr = { 5,5,5,0,1,2,5 };
    vector<int>ans(7);
    int n = arr.size();
    int start = 5;

    int k = 0;
    for (int i = start; i < n + start; i++)
    {
        ans[k++] = (arr[i % n]);
    }

    for (auto i : ans)
        cout << i << " ";

}