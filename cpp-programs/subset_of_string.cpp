#include<bits/stdc++.h>
using namespace std;

void backtrack(string &s, set<string> &res, string& sub, int index) {
    if (index >= s.size()) {
        res.insert(sub);
        return;
    }

    // Exclude
    backtrack(s, res, sub, index + 1);

    // Include
    sub.push_back(s[index]);
    backtrack(s, res, sub, index + 1);
    sub.pop_back();
}

vector<string> subset(string& s) {
    set<string> res;
    string sub = "";

    backtrack(s, res, sub, 0);

    cout << "Set: ";
    vector<string>  ans;
    for (auto it : res) {
        ans.push_back(it);
    }

    return ans;
}


int main()
{
    string s = "eidbaooo";

    vector<string> ans = subset(s);

    for (auto it : ans) {
        for (auto jt : it) {
            cout << jt << ' ';
        }cout << endl;
    }

    return 0;
}