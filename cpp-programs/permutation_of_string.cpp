#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

// Function to generate all permutations of a string
void dp(string &s, vector<int> &used, string &curr, vector<string> &res) {
    if (curr.size() == s.size()) {
        res.push_back(curr);
        return;
    }

    for (int i = 0; i < s.size(); i++) {
        if (used[i]) continue;
        used[i] = 1;
        curr.push_back(s[i]);
        dp(s, used, curr, res);
        curr.pop_back();
        used[i] = 0;
    }
}

vector<string> findPermutation(string s) {
    vector<string> res;
    int n = s.size();
    vector<int> used(n, 0);
    string curr;
    dp(s, used, curr, res);
    return res;
}
// (idfc - a song)

int main()
{
    string s = "abc"; // abc acb bac bca cab cba
    vector<string> ans = findPermutation(s);

    for (auto it : ans) {
        for (auto jt : it) {
            cout << jt << ' ';
        }cout << endl;
    }

    cout << "\nSize: " << ans.size() << endl;

    return 0;

}