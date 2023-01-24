#include <bits/stdc++.h>
using namespace std;

void mergeArr(vector<int>& v, int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    vector<int> v1(len1);
    vector<int> v2(len2);

    for (int i = 0; i < len1; i++)
    {
        v1[i] = v[start + i];
    }
    for (int i = 0; i < len2; i++)
    {
        v2[i] = v[mid + 1 + i];
    }

    int k = start, i = 0, j = 0;
    while (i < len1 && j < len2)
    {
        if (v1[i] < v2[j]) {
            v[k++] = v1[i++];
        }
        else
            v[k++] = v2[j++];
    }

    while (i < len1)
    {
        v[k++] = v1[i++];
    }

    while (j < len2)
    {
        v[k++] = v2[j++];
    }

}

void mergeSort(vector<int>& v, int start, int end) {
    int mid = start + (end - start) / 2;

    // base case 
    if (start >= end) return;

    mergeSort(v, start, mid);
    mergeSort(v, mid + 1, end);

    mergeArr(v, start, end);
    // sort(v.begin(), v.end());
}

int main() {

    vector<int> v = { 23,99,32,11,54,31,4,2,5,3,1 };

    mergeSort(v, 0, v.size() - 1);

    for (auto i : v) {
        cout << i << " ";
    }   
}