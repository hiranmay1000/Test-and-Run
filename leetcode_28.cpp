#include <bits/stdc++.h>
#include<string.h>

using namespace std;

class Solution {
public:
    int strStr(string s1, string s2) {
        int index = -1;
        string temp = "";
        int i = 0;
        int j = 0;
        for (; i < s1.length(); i++) {

            if (s1[i] == s2[j]) {
                temp += s1[i];
                j++;
            }
            else {
                temp = ""; //reset
                j = 0;
            }

            if (temp == s2) {
                return i - (s2.size() - 1);
            }
            cout << "i: " << i << " " ;
        }
        cout << temp << endl;
        cout << "Index:";
        return index;
    }
};

int main() {
    Solution sol;
    cout << sol.strStr("mississippi", "issip");

    return 0;
}