#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "geeksforgeeks";

    int maxFreq=0;

    unordered_map<char, int> m;

    for (char ch : s) {
        int i=0;
        m[ch]++;
        maxFreq=max(maxFreq, m[s[i]]);
        i++;
    }

    unordered_map<char, int> ::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << "\t" << it->second << endl;
    }
    
    cout << maxFreq << endl;
}