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
        for (int j = 0; j < a[i].size(); j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            cout << c[i][j] << " "; // 4, 4,
                                    // 4, 4.
        }
        cout << endl;
    }

    return 0;
}