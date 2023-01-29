#include <bits/stdc++.h>
using namespace std;

//complexity -> O(n*m).
// rotate matrix by 90deg

void rotateMatrix(vector<vector<int>> a) {
    vector<int> ans;

    int row = a.size();
    int col = a[0].size();

    // int count = 0;
    // int total = row * col;

    // int startingRow = 0;
    // int startingCol = 0;
    // int endingRow = row - 1;
    // int endingCol = col - 1;

    // while (count < total)
    // {
    //     for (int i = endingRow; i >= startingRow; i--)
    //     {
    //         ans.push_back(a[i][startingCol]);
    //         count++;
    //     }
    //     startingCol++;
    // }

    for (int j = 0; j < col; j++)
    {
        for (int i = row; i >= 0; i--)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    vector<vector<int>> a = { {1,2,3,8},      // 7 4 1
                              {4,5,6,8},      // 8 5 2
                              {7,8,9,8},      // 9 6 3
                              {7,1,2,8}       // 9 6 3
    };
    rotateMatrix(a);
    cout << endl;
}