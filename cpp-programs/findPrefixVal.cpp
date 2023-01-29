#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={0, -9, 1, 3, -4, 5};

    int max=0; 

    for(int i=0; i<v.size(); i++){
        if(max<v[i]){
            max=v[i];
        }
    }

    cout << max << endl;
}