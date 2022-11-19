#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> chs;
    for (int i = 0; i < 7; i++)
    {
        char in;
        cin >> in;
        chs.push_back(in);
    }


    for (int i = 0; i < 7; i++)
    {
        cout << chs[i] << " ";
    }

    cout << endl;

    map<char, int> mp;

    vector<char> ans;

    for (int i = 0; i < chs.size(); i++)
    {
        mp[chs[i]]++;
    }

    for (auto it : mp)
    {
        ans.push_back(it.first);
        char ch = it.second + '0';
        ans.push_back(ch);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }

    return 0;
}