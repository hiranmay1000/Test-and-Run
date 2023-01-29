#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<int> ultimateInterval = {0, 0};
        vector<vector<int>> ans;
        int x = 0;

        if(intervals.size() == 0){
            ans.push_back(newInterval); 
            return ans;
        }

        for (int i = 0; i < intervals.size(); i++) {
            if (intervals[i][0] <= newInterval[0] and intervals[i][1] >= newInterval[0]) {
                x = newInterval[1];
            }
            if (x >= intervals[i][0] and x <= intervals[i][1]) {
                x = intervals[i][1];
            }
            ultimateInterval[0] = newInterval[0];
            ultimateInterval[1] = x;
        }

        for (int i = 0; i < intervals.size(); i++) {
            cout << ultimateInterval[0] << endl;
            cout << ultimateInterval[1] << endl;
            if(ultimateInterval[0] > intervals[i][1] or ultimateInterval[1] < intervals[i][0]){
                ans.push_back({intervals[i][0], intervals[i][1]});
            }else{
                ans.push_back({ultimateInterval[0], ultimateInterval[1]});
            }
            if (intervals[i][0] <= ultimateInterval[0] and intervals[i][1] >= ultimateInterval[0]) {
                ans.push_back({ intervals[i][0], ultimateInterval[1] });
            }
        }

        return ans;
    }
};

int main() {
    Solution prob;

    vector<vector<int>> v = {
        {1,5}
    };
    vector<int> intervals = { 6, 8 };



    vector<vector<int>> a = prob.insert(v, intervals);

    cout << "Ans: " << endl << endl;
    for (auto i : a) {
        for (auto j : i) {
            cout << j << "\t";
        }cout << endl;
    }


    return 0;

}