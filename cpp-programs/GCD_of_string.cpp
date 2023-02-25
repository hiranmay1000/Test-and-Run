#include<bits/stdc++.h>
using namespace std;


class Solution {
private:
    int gcd(int n, int m) {
        for (int i = m <= n ? m : n; i > 1; i--) { // what is happening here?
            if (n % i == 0 && m % i == 0) return i; 
        }
        return 1;
    }

public:
    string gcdOfStrings(string s1, string s2) {
        if (s1 + s2 == s2 + s1)
            return s1.substr(0, gcd(s1.size(), s2.size()));

        return "";
    }

};

int main()
{
    Solution prob;

    string s1 = "TAUXXTAUXXTAUXXTAUXXTAUXX";
    string s2 = "TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX";

    cout << "Ans: " << prob.gcdOfStrings(s1, s2) << endl;
    return 0;
}