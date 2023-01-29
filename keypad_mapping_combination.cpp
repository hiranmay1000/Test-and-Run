#include<bits/stdc++.h>
using namespace std;


void backtrack(string& digits, vector<string>& res, string sub, int index, vector<string>& arr) {
    // base case
    if (index >= digits.size()) {
        res.push_back(sub);
        return;
    }

    // Include
    int val = (digits[index]) - '0';
    string word = arr[val];
    for (int i = 0; i < word.size(); i++)
    {
        sub.push_back(word[i]);
        backtrack(digits, res, sub, index + 1, arr);
        sub.pop_back();
    }

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
    string digits = "73";
    vector<string>  ans;

    ans = letterCombinations(digits);

    for (auto words : ans) {
        cout << "[ ";
        int j = 0;
        for (auto letters : words) {
            cout << letters ;
            if(j++ < words.size() - 1)
                cout << ',';
        }cout << " ]" << endl;
    }

    return 0;
}