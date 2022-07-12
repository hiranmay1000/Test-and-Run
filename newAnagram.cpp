#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string p;
    getline(cin, s);
    getline(cin, p);
    bool isP = false;

    s.erase(remove(s.begin(), s.end(), ' '), s.end()); // remove space
    p.erase(remove(p.begin(), p.end(), ' '), p.end()); // remove space

    if (s.length() != p.length())
    {
        isP = false;
        exit;
    }

    transform(s.begin(), s.end(), s.end(), ::tolower);//convert to lowercase
    transform(p.begin(), p.end(), p.end(), ::tolower);//convert to lowercase

    sort(s.begin(), s.end()); // sort
    sort(p.begin(), p.end()); // sort

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != p[i]){
            isP = false;
            exit;
        }else
            isP = true;
            exit;
    }

    if(isP == true){
        cout << "Yes" << endl;  
    }else
        cout << "No" << endl;
}