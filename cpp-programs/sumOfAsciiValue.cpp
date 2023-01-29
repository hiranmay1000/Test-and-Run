#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string s;
    int n = 0;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            n += s[i];
        }
    }
    cout << n << endl;

    // n = s[0];

    // cout << n << endl;
    return 0;
};