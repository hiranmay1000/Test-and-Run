#include <bits/stdc++.h>
using namespace std;

auto start = chrono::steady_clock::now();

class Solution {
public:
    vector<int> minOperations(string box) {
        for (int i = 0; i < box.size(); i++)
        {
            
        }
    }
};

int main()
{
    Solution prob;
    string s = "110";
    vector<int> v;
    v = prob.minOperations(s);

    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;
    auto end = chrono::steady_clock::now();
    auto diff = start - end;
    cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;   
}