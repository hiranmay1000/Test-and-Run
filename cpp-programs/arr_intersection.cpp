#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    for (size_t i = 0; i <= n; i++)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = arr[mid + 1];
        }
        else if (key < arr[mid])
        {
            end = arr[mid - 1];
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr1;
    vector<int> arr2;

    // first array
    arr1.push_back(33);
    arr1.push_back(11);
    arr1.push_back(22);

    // second array
    arr2.push_back(9);
    arr2.push_back(4);
    arr2.push_back(7);

    for (size_t i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }

    int ans = binarySearch(arr1, arr1.size(), 22);

    cout << "Index -> " << ans << endl;

    return 0;
}
