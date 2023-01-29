#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={13, 9, 25, 1, 1, 0, 22, 13, 22, 20, 3, 8, 11, 25, 10, 3, 15, 11, 19, 20, 2, 4, 25, 14, 23, 14};// correct ans =>1 3 11 13 14 20 22 25
    //it is not providing correct output
    vector<int> ans;
    vector<int> em;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            if(v[i]==v[j]){
                ans.push_back(v[i]);
            }
        }
        
    }

    if(v.empty()){
        em.push_back(-1);
        cout << em.at(0);
    }

    for(auto i:ans){
        cout<< i << " ";
    }cout << endl;
    
}