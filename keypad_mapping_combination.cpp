#include<bits/stdc++.h>
using namespace std;


void backtrack(vector<string>& res, string sub, set<string> setres, int index, vector<int>& arr) {
    // base case
    if (index >= digits.size()) {
        cout << sub << "  ";
        return;
    }

    // Exclude
    backtrack(digits, res, sub, setres, index + 1);

    // Include 
    sub = +digits[index];
    backtrack(digits, res, sub, setres, index + 1);

    sub.pop_back();
}

vector<string> letterCombinations(string digits) {
    vector<string> res;
    string sub = "";

    vector<string> arr = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

    backtrack(digits, res, sub, 0, arr);
    return res;
}



int main()
{
    string digits = "23";
    vector<string>  ans;

    ans = letterCombinations(digits);

    for (auto it : ans) {
        for (auto jt : it) {
            cout << jt << ' ';
        }cout << endl;
    }

    return 0;
}