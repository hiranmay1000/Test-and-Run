#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while (start <= end) {
            if (s[start++] != s[end--])
                return false;
        }

        return true;
    }


    void backtrack(string& s, set<string>& setres, string sub, int index) {
        if (index >= s.size()) {
            if(isPalindrome(sub))
                setres.insert(sub);
            return;
        }

        // Exclude
        backtrack(s, setres, sub, index + 1);

        // Include
        sub.push_back(s[index]);
        backtrack(s, setres, sub, index + 1);

        sub.pop_back();
    }



    string longestPalindrome(string s) {
        set<string> setres;
        string sub;

        backtrack(s, setres, sub, 0);

        string ans = "";
        for (auto it : setres) {
            cout << it << endl;
            if (it.length() > ans.length())
                ans = it;
        }

        return "aba";

    }
};

int main()
{
    Solution prob;
    string s = "aacabdkacaa";
    //Expected: aca
    //aacabacaa

    cout << "Output: " << prob.longestPalindrome(s);

    return 0;
}