#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string s;
    getline(cin, s);

    unordered_map<char, int> mp;

    for (char it : s) {
        mp[it]++;
    }

    reverse(s.begin(), s.end());

    for (auto it : mp)
    {
        if (it.second == 1) {
            cout << it.first;
            break;
        }
        else {
            cout << "_" << endl;
        }
    }
}