#include <bits/stdc++.h>
using namespace std;


int partition(vector<int>& arr, int start, int end) {
    int pivot = arr[start];
    int count = 0;
    int pivotIndex = 0;

    // count all the elements which is less than pivot on its right
    for (int i = 0; i < end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        if (arr[i] <= pivot)
            i++;

        if (pivot < arr[j])
            j--;

        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }

    return pivotIndex;

}

void quickSort(vector<int>& arr, int start, int end)
{
    if (start >= end) return;

    int pivIndx = partition(arr, start, end);

    quickSort(arr, start, pivIndx - 1);
    quickSort(arr, pivIndx + 1, end);

}

int main()
{
    vector<int>v = { 3,1,2,5,4 };

    quickSort(v, 0, v.size() - 1);

    // ==================PRINT FUNCTION==================
    cout << endl;
    for (auto i : v)
        cout << i << " ";

    int random = 0 + rand() % (6 - 0);

}