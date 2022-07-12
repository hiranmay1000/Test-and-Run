#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> st;

    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        string w = "";
        if (s[i] != ' ')
        {
            w += s[i];
            i++;
        }
        st.push(w);
    }

    while (!st.empty()) // printing stackin in reverse chronologincally
    {
        cout << st.top();
        st.pop(); // removing top element in each iteration
    }
}