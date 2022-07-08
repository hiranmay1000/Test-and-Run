#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.size();

    char ans[99];
    int j = 0;
    string p;

    // 1st approach

    cout << "First method ->";
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s.at(i) == s.at(n - 1))
        {
            ans[j] = s.at(i); // this approach is also valid
            cout << s.at(i);  // but this one loop aprach (use s.at() function to print ans directly)
            j++;
            n--;
        }
        else
            break;
    }

    for (int k = 0; k < j; k++)
    {
        cout << ans[k];
    }

    // 2nd approach

    cout << endl
         << "Second method ->";
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - 1 - i])
        {
            cout << s[n - 1 - i];
        }
        else
            break;
    }
}