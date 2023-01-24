#include <bits/stdc++.h>
using namespace std;

int count = 0;
int countNum(vector<int>& a, int n, int num) {
    // base case 
    if (n < 0) return 0;

    if (num == a[n - 1])
        return 1 + countNum(a, n - 1, num);

    return countNum(a, n - 1, num);
}

int main() {
    vector<int> a = { 1,3,4,5,5,5,6,7 };
    int num = 5;

    if(countNum(a, a.size(), num)){
        cout << "Element present at index: " << countNum(a, a.size(), num);
    }else
        cout << "Element Not present";
}