#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    cin >> n >> m;

    for (int i = 0; i <= m; i++)
    {       
        if (n % i == 0 || n)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}