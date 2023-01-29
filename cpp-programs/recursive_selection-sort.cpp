#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& v, int size) {
    // base case
    if (size == 0) return;

    for (int i = 0; i < size; i++)
    {
        selectionSort(v, size - 1);
        if (v[i] > v[size - 1])
            swap(v[i], v[size - 1]);
    }
}


int main()
{
    vector<int> v = { 4,2,5,6,1,3 };

    selectionSort(v, v.size());

    for (auto i : v) {
        cout << i << " ";
    }
}