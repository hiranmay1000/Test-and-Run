#include <bits/stdc++.h>
using namespace std;

void rotateArr(int* a, int n, int pos) {
    for (int i = pos; i < n + pos; i++)
    {
        cout << a[(i % n)] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int p;
    cout << "Enter position: ";
    cin >> p;
    rotateArr(a, n, p);

    return 0;
}