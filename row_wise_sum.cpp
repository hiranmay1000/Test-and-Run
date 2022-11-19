#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }

    }

    int sum = 0;

    cout << "Sum row wise: " << endl;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += a[i][j];
        }
        cout << sum << " ";
    }

    cout << endl;   

    cout << "Sum column wise: " << endl;
    for (int j = 0; j < 4; j++)
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += a[i][j];
        }
        cout << sum << " ";
    }

    cout << endl;


    return 0;
}