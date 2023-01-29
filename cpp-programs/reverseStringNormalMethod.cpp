#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    reverse(s.begin(), s.end());
    s.insert(s.end(), ' '); // add space at the end word, so that it can also be re-reversed

    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            reverse(s.begin() + j, s.begin() + i); // this part not able to understand whats happening here with [s.begin() + i] part
            cout << s << endl;
            j = i + 1; // update j for next word;
        }
    }
    s.pop_back(); // removing temp space

    cout << endl
         << s << endl;
}