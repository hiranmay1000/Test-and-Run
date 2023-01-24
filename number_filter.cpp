#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
    
        bool flag = false;
        int ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' and s[i] <= '9') {
                if (s[i-1] == '-') {
                    flag = true;
                }
                int val = s[i] - 48;
                ans += val;
                ans *= 10;
            }
        }

        ans /= 10;

        if (flag == true) {
            return -ans;
        }
        else{
            return ans;
        }
    }
};

int main(){
    Solution prob;
    cout << "Ans: " << prob.myAtoi("hello-0230") << endl;

    return 0;
}