#include<bits/stdc++.h>
using namespace std;

int subset(string &s, vector<string>  &res, string sub, vector<int> dp, int index){
    if(index >= s.size()){
        res.push_back(sub);
        return dp[s.size()];
    }

    // Exclude
    subset(s, res, sub, dp, index + 1);

    if(dp[index] != -1){
        sub = dp[index];
        return dp[s.size()];
    }else{
        // Include
        sub.push_back(s[index]);
        subset(s, res, sub, dp, index + 1);
    }

}

vector<string> findSubset(string &s){
    vector<string>  res;
    string sub = "";
    vector<int> dp(pow(2, s.size()) + 1, -1);
    dp[0] = 0;

    subset(s, res, sub, dp, 0);

    for(auto it:dp){
        cout << it << ' ';
    }
}

int main()
{
    string s = "abc";

    vector<string>  ans = findSubset(s);

    for(auto it:ans){
        for(auto jt:it){
            cout << jt << ' ';
        }cout << endl;
    }

    return 0;
}