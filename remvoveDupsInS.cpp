#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="gfg", t;//ans=gf

    unordered_map<char, int> m;

    for(int i=0; i<s.length(); i++){
        m[s[i]]++;
    }

    for(auto it:m){
        t+=it.first;
    }
    reverse(t.begin(), t.end());
    cout << t << endl;

    return 0;
}