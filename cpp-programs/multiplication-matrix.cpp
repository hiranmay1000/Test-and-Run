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

    vector<vector<int>> ans;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int sum = 0;
            for (int k = 0; k < 2; k++)
            {
                sum += a[j][k] * b[k][j];
            }
            ans[i].push_back(sum);
        }

    }

    for (auto it : ans) {
        for (auto jt : it) {
            cout << jt << ' ';
        }cout << endl;
    }


    return 0;
}