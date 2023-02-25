#include<bits/stdc++.h>
using namespace std;


void backtrackWith_NON_REPEATING_Element(vector<int>& arr, vector<int> sub, int index, vector<vector<int>>& non_repeat_ele_ans) {
    // base case
    if (index >= arr.size()) {
        non_repeat_ele_ans.push_back(sub);
        return;
    }

    // Exclude
    backtrackWith_NON_REPEATING_Element(arr, sub, index + 1, non_repeat_ele_ans);

    // Include
    sub.push_back(arr[index]);
    backtrackWith_NON_REPEATING_Element(arr, sub, index + 1, non_repeat_ele_ans);
}


void backtrackWith_REPEATING_Element(vector<int>& arr, vector<int> sub, int index, set<vector<int>>& setres) {
    // base case
    if (index >= arr.size()) {
        setres.insert(sub);
        return;
    }

    // Exclude 
    backtrackWith_REPEATING_Element(arr, sub, index + 1, setres);

    // Include
    sub.push_back(arr[index]);
    backtrackWith_REPEATING_Element(arr, sub, index + 1, setres);

}


vector<vector<vector<int>>> subset(vector<int>& arr) {
    vector<int> sub;
    set<vector<int>> setres;
    vector<vector<vector<int>>> _final;     



    vector<vector<int>> non_repeat_ele_ans;
    backtrackWith_NON_REPEATING_Element(arr, sub, 0, non_repeat_ele_ans);
    _final.push_back(non_repeat_ele_ans);



    vector<vector<int>> repeat_ele_ans;
    backtrackWith_REPEATING_Element(arr, sub, 0, setres);
    for (auto it : setres) {
        repeat_ele_ans.push_back(it);
    }


    _final.push_back(repeat_ele_ans);

    return _final;
}


int main() {
    vector<int> v = { 1,3,3 };
    vector<vector<vector<int>>> non_repeat_ele_ans = subset(v);


    // print 3D vector ans
    int i = 0;
    for (auto it : non_repeat_ele_ans) {
        if (i == 0)
            cout << "For Random element: \n";
        else
            cout << "\n\nDiscard Repeated element: \n";

        for (auto jt : it) {
            cout << "[";
            int j = 0;
            for (auto kt : jt) {
                cout << kt;
                if (j++ < jt.size() - 1) cout << ",";
            }cout << "]" << endl;
        }
        i++;
    }


    return 0;
}