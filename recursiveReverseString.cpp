#include <bits/stdc++.h>
using namespace std;

void reverseStr(string& s, int i) {
    // base case
    if(i > s.size()) return;
    
    swap(s[i++], s[s.size()-i-1]);

    reverseStr(s, i);
}


int main()
{
    string s = "malloc";    

    reverseStr(s, 0); // collam
    cout << s;
}