#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {0,1,0,3,2,3};
    vector<int> ans;
    
    for (auto i:v)
    {
        if(ans.empty() or ans.back() < i){
            ans.push_back(i);
        }else{
            auto it = lower_bound(ans.begin(), ans.end(), i); // it stores the index of val which is less than 'i'
            *it = i; // replace the 'i' with max val found 
        }
    }
    
    for(auto i:ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}