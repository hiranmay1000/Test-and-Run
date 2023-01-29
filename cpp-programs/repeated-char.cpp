#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "geeksforgeeks";
    int n = s.length();

    int maxFreq = 0;

    unordered_map<char, int> m;

    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
        if (maxFreq < m[s[i]]) {
            maxFreq = m[s[i]];
            cout << maxFreq << " ";
        }
    }

    cout << endl;

    for (int i = 0; i < m.size(); i++)
    {
        if (m[s[i]] == maxFreq) {
            cout << s[i];
            break;
        }
    }
    cout << endl;

    cout << "Another method of printing maxFreq char in a string: \n";
    for (auto it : m) {
        if (it.second == maxFreq) {
            cout << it.first;
        }
    }


    cout << endl;

    // for (int i = 0; i < m.size(); i++)
    // {        
    //     if(m[s[i]] >1){
    //         cout << s[i] << " ";
    //     }
    // }

    // cout << maxFreq << endl;
    cout << endl;
}