#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {

    int n = nums.size();

    int left = 0;
    int right = 0;

    int sum=0;

    for(auto i:nums){
        sum+=i;
    }

    for (int i = 0; i < n; i++)
    {
        if((sum-nums[i]-left == left)){
            return i;
        }else
            left+=nums[i];
    }

    return -1;
}

int main() {
    vector<int> v = { 2,1,-1 };

    cout << pivotIndex(v) << endl;
}