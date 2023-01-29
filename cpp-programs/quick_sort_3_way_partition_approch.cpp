#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& arr, int start, int end)
{
    // Base case:
    if (start >= end) return;

    int random = start + rand() % (end - start); 
    int mid = start + (end - start) / 2; 
    int pivot = arr[mid];
    cout << "Pivot: " << pivot << endl;

    int i = start, j = end;

    // partitioning the array
    while (i <= j)
    {
        // i starts from the beginning of the subarray and moves towards the right until it finds an element greater than or equal to the pivot
        while (arr[i] < pivot) i++;
        // j starts from the end of the subarray and moves towards the left until it finds an element less than or equal to the pivot
        while (arr[j] > pivot) j--;
        if (i <= j)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    // recursively sort the left and right subarrays
    quickSort(arr, start, j);
    quickSort(arr, i, end);
}

int main()
{
    vector<int> arr = { 4,5,3,2,1};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    for(auto it:array_name){
        
    }


    // ==================PRINT FUNCTION==================
    cout << endl;
    for (auto i : arr)
        cout << i << " ";

}