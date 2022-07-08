#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <random>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    map<char, int> mp;

    int a = 1;
    int e = 2;
    int i = 3;
    int o = 4;
    int u = 5;

    // int A = 2;
    // int E = 4;
    // int I = 6;
    // int O = 8;
    // int U = 10;

    int ans = 0; // 1

    //This approch is not satisfactory
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s.at(i);
        if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U')
        {
            // ans += mp[s.at(i)] = s.at(i);
            if (ch == 'a')
            {
                ans += mp[ch] = a;//ans is not giving proper output
            }
            else if (ch == 'e')
            {
                ans += mp[ch] = e;
            }
            else if (ch == 'i')
            {
                ans += mp[ch] = i;
            }
            else if (ch == 'o')
            {
                ans += mp[ch] = o;
            }
            else if (ch == 'u')
            {
                ans += mp[ch] = u;
            }
            // for upper case -- it is multiplied by 2
            // else if (ch == 'A')
            // {
            //     ans += mp[ch] = A;
            // }
            // else if (ch == 'E')
            // {
            //     ans += mp[ch] = E;
            // }
            // else if (ch == 'I')
            // {
            //     ans += mp[ch] = I;
            // }
            // else if (ch == 'O')
            // {
            //     ans += mp[ch] = O;
            // }
            // else if (ch == 'U')
            // {
            //     ans += mp[ch] = U;
            // }
            // else
            //     break;
            cout << ch << " " << endl;
        }
    }

    cout << "Sum of vowel in the sentence is -> " << ans;

    // will return number
    //  for (auto c : s)
    //  {
    //      mp[c] = e;
    //      cout << mp[c];
    //  }

    return 0;
}