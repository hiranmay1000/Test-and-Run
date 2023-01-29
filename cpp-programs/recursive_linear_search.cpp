#include <bits/stdc++.h>
using namespace std;

int findKey(vector<int>& a, int n, int k) {
    if (n <= 0) return 0;

    if (a[n-1] == k){
        return n-1;
    }

    return findKey(a, n-1, k);
}

int main()
{
    vector<int> a = { 4,2,5,3,6,12 };
    int key = 6;

    if (findKey(a, a.size(), key)) {    
        cout << "\nElement is Present!" << endl;
        cout << "At Index: " << findKey(a, a.size(), key) << endl;
    }
    else {
        cout << "Element is NOT Present!" << endl;
    }

    return 0;
}