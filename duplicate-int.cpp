#include <bits/stdc++.h>
using namespace std;

void isDuplicate(string a)
{
    a.erase(remove(a.begin(), a.end(), ' '), a.end());//erase space
    vector<int> v;

    for (int i = 0; i < a.length(); i++)
    {
        int x = 0;
        char ch = a[i];
        if (isdigit(ch)) {
            x = ch - '0';
        }
        // int x=atoi(temp.c_str());//or
        v.push_back(x);
    }
    cout << "v => [ ";
    for (int i = 0; i < v.size(); i++) {
        if (i)
            cout << ',';
        cout << v.at(i);
    }
    cout << " ]" << endl;

    vector<int> dup;
    for(int i=0; i<v.size(); i++){
        for (int j = i + 1; j < v.size(); j++)
        {
            if(v[i]==v[j]){
                dup.push_back(v[i]);
            }
        }
        
    }


    cout << "Duplicate elements => [ ";
    for (int i = 0; i < dup.size(); i++) {
        if (i)
            cout << ',';
        cout << dup.at(i);
    }
    cout << " ]" << endl;

}

int main()
{
    string x = "1 2 3 2 5";
    isDuplicate(x);
}
