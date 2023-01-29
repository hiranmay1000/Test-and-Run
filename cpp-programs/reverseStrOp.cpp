#include <bits/stdc++.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length()/2; i++)
    {
        swap(s[i], s[s.size() - 1 - i]);
    }
    
    BigInteger A = new Biginteger(s1);

    char  n = '1';
    int num ;
    switch (n)
    {
    case '1':
        num = 1;
        break;
    
    default:
        break;
    }
    
    cout << s;

    return 0;
}
