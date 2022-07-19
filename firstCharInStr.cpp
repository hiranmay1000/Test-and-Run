#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="jsbr qmj u y vjo ue krmd ssviq tid";

    s.insert(s.end(), ' ');
    string s1="";
	    string ans="";
	    for(int i=0; i<s.length(); i++){
	        if(s[i]!=' '){
	            s1+=s[i];
	        }else{
                ans+=s1[0];
                s1="";
            }
	    }
        s.pop_back();
	cout << ans << endl;
}