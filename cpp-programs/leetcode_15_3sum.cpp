#include<bits/stdc++.h>
using namespace std;

class Solution {
    void backtrack(vector<int>& nums, vector<vector<int>>& res, vector<int> sub, set<vector<int>>& hashset, int index) {
        // base case
        if (index >= nums.size()) {
            sort(sub.begin(), sub.end());
            hashset.insert(sub);
            return;
        }

        backtrack(nums, res, sub, hashset, index + 1);

        // Include 
        sub.push_back(nums[index]);
        backtrack(nums, res, sub, hashset, index + 1);

        sub.pop_back();
    }
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sub;
        set<vector<int>> hashset;

        backtrack(nums, res, sub, hashset, 0);
        for (auto subArr : hashset) {
            if (subArr.size() == 3) {
                long long sum = 0;
                for (auto num : subArr) {
                    sum += num;
                }
                if (sum == 0) {
                    res.push_back(subArr);
                }
            }
        }
        return res;
    }
};

int main()
{
    Solution prob;
    vector<int>  v = { 34,55,79,28,46,33,2,48,31,-3,84,71,52,-3,93,15,21,-43,57,-6,86,56,94,74,83,-14,28,-66,46,-49,62,-11,43,65,77,12,47,61,26,1,13,29,55,-82,76,26,15,-29,36,-29,10,-70,69,17,49};

    vector<vector<int>>  ans = prob.threeSum(v);

    for(auto it:ans){
        for(auto jt:it){
            cout << jt << ' ';
        }
    }

    return 0;
}