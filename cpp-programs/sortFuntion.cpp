#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    cout << a << endl
         << b << endl;

    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] == b[i]){
            cout << a[i];
        }
    }
    
}