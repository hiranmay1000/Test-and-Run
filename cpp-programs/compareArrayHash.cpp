#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[]= {1,2,5,4,0};
    int b[]= {2,4,5,0,1};

    int n=sizeof(a)/sizeof(a[0]);

    map<int, int> mp1, mp2;

    for (int i=0; i<n; i++)
    {
        mp1[a[i]]++;
        mp2[b[i]]++;
    }

    if(mp1==mp2){
            cout << true << endl;
        }else

    cout << -1 << endl;
    
}