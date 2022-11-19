#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int* arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int m = s + (e - s) / 2;

    while (s <= e) {
        int element = arr[m];
        if (element == key) {
            return m;
        }
        if (key < element) {
            e = m - 1;
        }
        else {
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int arr[5] = { 2, 4, 6, 8, 12 };

    int ans = binarySearch(arr, 5, 8);
    cout << "Index -> " << ans << endl;

    return 0;
}