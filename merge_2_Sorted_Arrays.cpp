#include <bits/stdc++.h>
using namespace std;

void mergeArr(vector<int>& v1, vector<int>& v2)
{
    // convert into single array
    for (auto i : v2) {
        v1.push_back(i);
    }

    // apply selection sort
    for (int i = 0; i < v1.size(); i++)
        for (int j = i + 1; j < v1.size(); j++)
            if (v1[i] > v1[j])
                swap(v1[i], v1[j]);

}

int main()
{
    vector<int> v1 = { 1,3,6,8,9 };
    vector<int> v2 = { 2,4,5,7 };


    mergeArr(v1, v2);

    for (auto i : v1) {
        cout << i << " ";
    }
}