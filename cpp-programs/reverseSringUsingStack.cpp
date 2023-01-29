#include <bits/stdc++.h>
using namespace std;

void reverse(char *ch, int len)
{
    stack<char> st;

    char temp;
    for (int i = 0; i < len; i++)
    {
        temp = ch[i];
        st.push(temp);
    }

    string chr = "";
    while (!st.empty())
    {
        chr += st.top();
        st.pop();
    }
}
int main()
{
    char ch[100];
    cin >> ch;
    long long int len = strlen(ch);

    reverse(ch, len);
}