#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = { 10, 7, 4, 6, 8, 10, 11 };

    int cur=0;
    int count=0;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            cur=v[i]-v[j];
            if(cur==v[i]-v[j]){
                count++;
            }
            cur=0;
        }
        
    }



    cout << endl;
}