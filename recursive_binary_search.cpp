#include <bits/stdc++.h>
using namespace std;

int binarySearchRecursive(int* input, int start, int end, int x) {

    if (start <= end) {
        int mid = start + (end - start) / 2;
        if (x == input[mid]) {
            return mid;
        }

        if (x < input[mid]) {
            return binarySearchRecursive(input, 0, mid - 1, x);
        }
        else if (x > input[mid]) {
            return binarySearchRecursive(input, mid + 1, end, x);
        }
    }

    return -1;
}

int binarySearch(int* input, int n, int x)
{
    //Write your code here
    int start = 0;
    int end = n - 1;
    return binarySearchRecursive(input, start, end, x);
}

int main()
{
    int arr[] = { 6, 11, 22, 23, 43, 46, 52, 54, 67, 80, 100 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 100;

    cout << binarySearchRecursive(arr, 0, n-1, val);
}