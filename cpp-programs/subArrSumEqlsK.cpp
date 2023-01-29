#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();

    int sum = 0;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            sum = nums[i] + nums[j];
            if (k == sum || nums[i] != nums[j]) {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> v = { 1,2, 3, 4 };
    int k = 4;
    cout << subarraySum(v, k);
    cout << endl;
}