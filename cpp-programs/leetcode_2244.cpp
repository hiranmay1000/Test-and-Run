#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRounds(vector<int>& t) {
        int total_task = 0;

        unordered_map<int, int> mp;
        stack<int> st;

        for (auto task : t) {
            mp[task]++; // mapping
        }

        for (auto it : mp) {
            if (it.second <= 1) {
                return -1;
            }
            else if (it.second >= 3) {
                    total_task += it.second / 3;
                    ceil((double)it.second/3.0);
                    it.second = it.second % 3;
                }
                else if (it.second == 2) {
                    total_task += 1;
                }
        }

        return total_task;
    }
};

int main() {
    Solution problem;

    vector<int> v = { 69,65,62,64,70,68,69,67,60,65,69,62,65,65,61,66,68,61,65,63,60,66,68,66,67,65,63,65,70,69,70,62,68,70,60,68,65,61,64,65,63,62,62,62,67,62,62,61,66,69 };
    // vector<int> v = {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
    // vector<int> v = {2, 3,2,3};
    cout << endl << problem.minimumRounds(v) << endl;
}