#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    reverse(s.begin(), s.end()); // reversed the string
    s.insert(s.end(), '.');      // add space in the last word so that it also gets reveresed.
    cout << s << endl;

    int j = 0;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == '.')
        {
            reverse(s.begin() + j, s.begin() + i); // reverse the word
            j = i + 1; // updated the j for reversing the next word
        }
    }
    s.pop_back();

    cout << s;

    /*
    reverse(S.begin(), S.end());
        
        S.insert(S.end(), '.');
        
        int j = 0;
        for(int i = 0; i < S.length(); i++){
            if(S[i] == '.'){
                reverse(S.begin() + j, S.begin() + i);
                j = i + 1;
            } 
            S.pop_back();
        }
        return S;
        */
}
