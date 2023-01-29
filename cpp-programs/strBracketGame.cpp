#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "[ABC[DE]]FG[HI]"; //
    int pos = 5;

    int count = 1;
    for (int i = pos; s[i] != ']'; i++)
    {
        if(s[i] != ']'){
            count++;
            cout << s[i] << " ";
        }
    }

    int ans = pos + count;
    cout << endl << ans;

    return 0;
}
