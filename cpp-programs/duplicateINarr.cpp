#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int b[]={0} ;

    for(int i=0; i<n; i++){
        b[a[i]]++;
    }

    for (int i = 0; i < sizeof(b)/sizeof(b[0]); i++)
    {
        cout << b[i] << " ";
    }
    


    cout << endl;
}

/*
26
13 9 25 1 1 0 22 13 22 20 3 8 11 25 10 3 15 11 19 20 2 4 25 14 23 14
*/