#include <bits/stdc++.h>

using namespace std;

template <typename T >
T max(T t1, T t2, T t3) {
    T temp = t1 > t2 ? t1 : t2;
    temp > t3 ? temp : t3;
}

template <typename BSort>
void bubbleSort(BSort a[], int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; i<j; j--)
        {
            if (a[j] < a[j-1]) {
                swap(a[j], a[j - 1]);
            }
        }
    }

}

int main() {
    int a[5] = { 10, 50, 30, 40, 20 };
    int n = sizeof(a) / sizeof(a[0]);

    bubbleSort<int>(a, n);

    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    cout << max(1, 4, 2) << endl;
}