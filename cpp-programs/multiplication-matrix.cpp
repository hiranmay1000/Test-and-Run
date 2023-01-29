#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> a = {
        {5, 6},
        {7, 8},
    };

    vector<vector<int>> b = {
        {1, 2},
        {3, 4},
    };

    int c[2][2];

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            c[i][j] = a[i][j] * b[i][j] + a[i][j + 1] * b[i + 1][j];
        }
        cout << endl; // not printing the correct values
    }

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl; // not printing the correct values
    }

    return 0;
}