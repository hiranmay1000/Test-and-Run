#include <bits/stdc++.h>
using namespace std;

bool isAna(string a, string b)
{
    a.erase(remove(a.begin(), a.end(), ' '), a.end());
    b.erase(remove(b.begin(), b.end(), ' '), b.end());

    if (a.length() != b.length())
    {
        return false;
        exit;
    }

    transform(a.begin(), a.end(), a.begin(), :: tolower);
    transform(b.begin(), b.end(), b.begin(), :: tolower);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < a.length(); i++)
    {
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

int main()
{
    string a;
    string b;

    getline(cin, a);
    getline(cin, b);

    bool isAnaPresent = isAna(a, b);
    if (isAnaPresent == true)
    {
        cout << "Yes";
    }
    else if (isAnaPresent == false)
        cout << "No ";
}