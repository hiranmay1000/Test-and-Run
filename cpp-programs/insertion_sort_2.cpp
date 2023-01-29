#include <bits/stdc++.h>

using namespace std;

// 4 2 1 3

void insertionSort_2(int *a, int& n) {
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        for (;j >= 0; j--) {
            if (temp < a[j]) {
                a[j + 1] = a[j];
                // j = j - 1;
            }
            else {
                break;
            }
        }
        a[j + 1] = temp;
    }
};

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    insertionSort_2(a, n);

    cout << "Answer: ";
    for (const auto& it : a) {
        cout << it << " ";
    }
    cout << endl;
};