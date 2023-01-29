#include <bits/stdc++.h>
using namespace std;

void binarySearch(vector<vector<int>> v, int k) {

    int row = v.size();
    int col = v[0].size();

    int s = 0;
    int e = (row * col) - 1;
    int m = s + (e - s) / 2;
    
    while (s <= e) {
        int element = v[m / col][m % col];

        if (element == k) {
            cout << "Element found! " << endl;
            cout << "Index position is: " << m / col << " " << m % col << endl;
        }
        if (element < k) {
            s = m + 1;
        }
        else {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
}

int main() {
    int key = 1;
    vector<vector<int> > a = { {1, 2, 4, 5}, {7, 9 , 12, 14}, {15, 19, 23, 45} };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }


    binarySearch(a, key);
}