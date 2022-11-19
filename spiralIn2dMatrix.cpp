#include <bits/stdc++.h>
using namespace std;

//complexity -> O(n*m).

void spiralMatrix(vector<vector<int>> a) {
    int row = a.size();
    int col = a[0].size();

    int count = 0;
    int total = row * col;

    vector<int> ans;

    //index
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        for (int i = startingCol;count < total and i <= endingCol; i++)
        {
            ans.push_back(a[startingRow][i]);
            count++;
        }
        startingRow++;

        for (int i = startingRow; count < total and i <= endingRow; i++)
        {
            ans.push_back(a[i][endingCol]);
            count++;
        }
        endingCol--;

        for (int i = endingCol; count < total and i >= startingCol; i--)
        {
            ans.push_back(a[endingRow][i]);
            count++;
        }
        endingRow--;

        for (int i = endingRow;count < total and i >= startingRow; i--)
        {
            ans.push_back(a[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
    
int main() {
    vector<vector<int>> a = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    spiralMatrix(a);
    cout << endl;
}