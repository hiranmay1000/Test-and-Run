#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> st; // set only insert unique elements, it avoids duplicate element to be inserted
    vector<int> v = { 4,4,2,1,2,8,8,9,9,9 };

    st.insert(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        if (st.count(v[i])) continue;
        st.insert(v[i]);
    }
    cout << "Size of set: " << st.size() << endl;

    for (auto it : st) {
        cout << it << " ";
    }

    //_______________________________________________

    cout << "\nNext part" << endl;
    set<vector<int>> arrset;
    vector<vector<int>>  matrix = {
        {3,1},
        {4,8},
        {5,9},
        {6,2},
        {3,1},
    };

    cout << "\nArray: " << endl;
    for(auto it:matrix){
        arrset.insert(it);
    }

    cout << "\nSet: " << endl;
    for(auto it:arrset){
        for(auto jt:it){
            cout << jt << ' ';
        }cout << endl;
    }

}