#include <bits/stdc++.h>
using namespace std;

int sum(vector<int>& nums, int n) {
    // base case
    if(n <= 0) return 0;

    return sum(nums, n-1) + nums[n-1];
}

int main()
{
    vector<int> num = { 3,2,5,1,6 };
    cout << endl << sum(num, num.size());
}