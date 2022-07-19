#include <bits/stdc++.h>
using namespace std;

void charFreq(string s, string p)
{
    set<char> set;
    int count=0;
    valarray<int> c;

    for (int i = 0; i < p.length(); i++)
    {
        set.insert(p[i]);//hola
    }

    for (int i = 0; i < s.length(); i++)
    {
        if(set.count(s[i])){
            cout << s[i];
            count++;
        }
    }
    cout << endl << count << endl;
    
    // dnsjbvhsvdshbvbshdbvsd
    // vjbdshvsdkbvhsdkvcdsv

    //do not remove
    cout << endl;
}

int main()
{
    string s = "dnsjbvhsvdshbvbshdbvsd";
    string patt = "vjbdshvsdkbvhsdkvcdsv";
    charFreq(s, patt);
}