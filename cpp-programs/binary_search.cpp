#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int n, int key)
{
    auto it = lower_bound(arr.begin(), arr.end(), key);

    return distance(arr.begin(), it);
}

int main()
{
    vector<int> arr = { 2, 4, 6, 8, 12 };
    int key = 12;

    cout<< "\nNumber " << key << " is at index -> " << binarySearch(arr, 5, key) << endl;

    return 0;
}