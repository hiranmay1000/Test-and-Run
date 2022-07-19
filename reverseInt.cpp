#include <bits/stdc++.h>
using namespace std;

int main(){
    int n =123;
    
    int sum=0;
    for(int i=0; n!=0;i++) {
        int rem=n%10;
        sum=rem + (sum*10);
        n/=10;
    }
    cout << sum << endl;
}