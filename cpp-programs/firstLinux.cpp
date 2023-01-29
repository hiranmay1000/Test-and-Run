#include <bits/stdc++.h>
using namespace std;

int

int main(){
    vector<int> a={1,2,3,4,5,6,7};

    reverse(a.begin(), a.begin()+4);//4321567

    for(auto i:a){
        cout << i << " " ;
    }

    cout << endl;
}