#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> arr, int n, int k) {
    // Compute the effective rotation distance
    k = k % n;

    // Perform rotation using bubble rotate method
    for (int i = 0; i < k; i++) {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

int main() {
    // vector<int>arr = { 5,5,5,0,1,2,5 };
    // vector<int>ans;
    // ans.reserve(arr.size());

    // int n = arr.size();
    // int till = 5;

    // for (int i = till; i < n + till; i++)
    // {
    //     ans.push_back(arr[i % n]);
    // }

    // for (auto i : ans)
    //     cout << i << " ";

    // cout << endl << endl;

    vector<int>rotateMe = { 5,5,5,0,1,2,5 };
    int times = 3;
    rotateArray(rotateMe, rotateMe.size(), times);

    for (auto i : rotateMe)
        cout << i << " ";

}