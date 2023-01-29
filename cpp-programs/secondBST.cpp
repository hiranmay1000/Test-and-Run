#include <bits/stdc++.h>
using namespace std;

int reverseArr(int a[], int n, int k) {

    int start = 0;
    int end = n - 0;
    int mid = start + ((end - start) / 2);

    while (start <= end) {
        if (k > a[mid]) {
            start = (mid + 1);
        }
        else if (k < a[mid]) {
            end = mid - 1;
        }
        if (k == a[mid]) {
            return mid;
        }
        mid = start + ((end - start) / 2);
    }

    return -1;
}

//59
// 1 2 3 4 5 6 8 9 10 14 16 19 22 23 25 26 27 29 31 34 35 36 38 39 40 45 46 48 50 51 52 57 59 60 61 63 67 68 69 71 75 76 77 79 81 82 83 86 87 88 90 92 93 94 95 96 98 99 100
// 93

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << endl;

    int key = 7;

    int ans = reverseArr(a, n, key);
    cout << ans << endl;

    cout << endl;
}