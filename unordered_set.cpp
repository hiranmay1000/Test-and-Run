#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> st;


    vector<int> v = {4,2,5,1,7,3,8, 2,1,1,1,1,8};

    st.insert(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        if(st.count(v[i])) continue;
        st.insert(v[i]);
    }

    for(auto it: st){
        cout << it << " ";
    }

    cout << endl;
}