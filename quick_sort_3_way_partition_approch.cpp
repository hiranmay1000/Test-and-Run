#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& arr, int start, int end)
{
    // Base case:
    // If the start index is greater than or equal to the end index, the subarray is already sorted and the function returns.
    if (start >= end) return;


    int pivot = arr[end];
    // The pivot is set as the last element of the array.

    int i = start, j = end;
    // i and j are initialized as the start and end indices of the subarray.

    // partitioning the array
    while (i <= j)
    {
        // iterating through the subarray with two pointers i and j
        // i starts from the beginning of the subarray and moves towards the right until it finds an element greater than or equal to the pivot
        while (arr[i] < pivot) i++;
        // j starts from the end of the subarray and moves towards the left until it finds an element less than or equal to the pivot
        while (arr[j] > pivot) j--;
        // if i is less than or equal to j, swap the elements at the i and j indices
        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    // recursively sort the left and right subarrays
    quickSort(arr, start, j);
    quickSort(arr, i, end);
}

int main()
{
    vector<int> arr = { 4, 2, 9, 6 ,3,7,2,8,0,2,32,54,12,7867,23,6557,12,10 };
    int n = arr.size();

    quickSort(arr, 0, n - 1);


    // ==================PRINT FUNCTION==================
    cout << endl;
    for (auto i : arr)
        cout << i << " ";

}