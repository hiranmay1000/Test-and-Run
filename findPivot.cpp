#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[start])
            start = mid + 1;
        else if (arr[mid] <= arr[start])
            end = mid;
    }
    return start;
}

int main() {
    vector<int>arr = { 5,7,21,76,989,1,2,4 };

    cout << findPivot(arr);

    // for (auto i : a)
    //     cout << i << " ";

}