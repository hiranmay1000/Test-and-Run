#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string& s, int start) { // try solving this with single pointer
    int n = s.size();
    // base case
    if (start >= s.size()) return true;

    if (s[start++] != s[n - start - 1])
        return false;

    return isPalindrome(s, start+1);
}

int main()
{
    string s = "nitin";

    cout << isPalindrome(s, 0) << endl;
}