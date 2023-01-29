#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int size) {
    if(size == 0 or size == 1) return;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] > arr[size])
            swap(arr[i], arr[size]);
    }

    bubbleSort(arr, size-1);
}


int main()
{
    vector<int> v = { 4,2,5,6,1,3 };

    bubbleSort(v, v.size());

    for(auto i:v){
        cout << i << " ";
    }
}