#include <bits/stdc++.h>
using namespace std;

void maximumFrequency(vector<int>& arr, int n)
{
    unordered_map<int, int> count;
    int maxFreq = 0;
    int maxAns = 0;

    for (int i : arr) {
        count[arr[i]]++;
    }

    unordered_map<int, int> ::iterator it = count.begin();
    // for (; it != count.end(); it++)
    // {
    //     cout << it->first << "\t" << it->second << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        cout << it->first << "\t" << it->second << endl;
        it++;
    }


    cout << endl;
}


int main() {
    vector<int> arr = { 1, 2, 3, 1, 2 };
    int size = arr.size();

    maximumFrequency(arr, size);
}