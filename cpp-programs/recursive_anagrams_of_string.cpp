#include<bits/stdc++.h>
using namespace std;

bool findAnagram(string &s, string &p){
    sort(s.begin(), s.end());
    sort(p.begin(), p.end());

    return (s == p)?true : false;
}

int main()
{
    string s = "abc";
    string p = "bca";▄

    if(findAnagram(s, p))
        cout << "It is Anagram!" << endl;
    else
        cout << "Not an Anagram" << endl;
    

    return 0;
}