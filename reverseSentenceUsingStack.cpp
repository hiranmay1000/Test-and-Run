#include <bits/stdc++.h>
#include <stack>
using namespace std;

string revSentence(string S)
{
    stack<string> st;

    for (int i = 0; i < S.length(); i++)
    {

        string word = "";
        while (S[i] != ' ' && S.length() > i)
        {
            word += S[i];
            i++;
        }
        st.push(word);
    }
    string s2 = "";
    while (!st.empty())
    {
        s2 += st.top() + " ";
        st.pop();
    }
    // cout << S << endl;
    return s2;
}

int main(int argc, char const *argv[])
{
    string s;
    getline(cin, s);

    cout << endl
         << revSentence(s) << endl;

    return 0;
}
