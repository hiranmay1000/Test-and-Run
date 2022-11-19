#include <bits/stdc++.h>
using namespace std;

bool search(vector<vector<int> > matrix, int n, int m, int x)
{
    int total = m * n;
    int count = 0;

    int startingRow = 0;
    int endingCol = m - 1;

    while (count < total) {
        int ele = matrix[startingRow][endingCol];

        if (x == ele) {
            return 1;
        }

        if (x < ele) {
            endingCol--;
        }
        else {
            startingRow++;
        }
        count++;
    }
    return 0;
}

int main() {
    int row, col;
    vector<vector<int>> a(row);
    cout << "Enter row: ";
    cin >> row;
    cout << "Enter col: ";
    cin >> col;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }
    int target;
    cin >> target;

    cout << "Answer: " << endl;
    for (int i = 0; i < row; i++) {
        a[i].assign(col, 0);
        for (int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
        cout << endl;
    }
    // cout << search(a, row, col, target) << endl;
}