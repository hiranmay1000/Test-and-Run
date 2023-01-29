#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    string s="hi";
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        st.push(s[i]);
    }
    
    while (!st.empty())
    {
        cout << st.top() << " ";
    }
    
    return 0;
}