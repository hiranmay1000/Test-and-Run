#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "1safd1dfa11asdfd11dvsd1dsd1";
    int sum = 0;
    string temp = "";

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (isdigit(ch))
        {
            temp += ch; // extract int
        }
        else
        {
            sum += atoi(temp.c_str()); // assign or add numeric value found (if any)
            temp = "";                 // reset;
        }
    }

    cout << sum + atoi(temp.c_str())<< endl;
}