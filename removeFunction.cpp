#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // 1st method
    // s.erase(remove(s.begin(), s.end(), ' '), s.end());

    // 2nd method
    // int removeSpaceCount = count(s.begin(), s.end(), ' '); // count the space before removing space
    // remove(s.begin(), s.end(), ' '); // remove space
    // s.resize(s.length() - removeSpaceCount); // substract string size by removed space

    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    cout << s; // print updated string
}