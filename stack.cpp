#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> st;
    string s;
    getline(cin, s);
    string w = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '.')
        {
            w += s[i];
        }
    }
    st.push(w);

    int size = st.size();
    for (int i = 0; i < size; i++)
    {
        // if (i)
        //     cout << ".";
        cout << st.top();
        st.pop();
    }

    // cout << st.size();

    return 0;
}