#include <bits/stdc++.h>
using namespace std;

int main(){
    valarray<int> va={1,2,3,4,5,6};
    array<int, 6> a={7,8,9,10,11,12};
    vector<int> va1={1,2,3,4,5};
    valarray<int> em;

    cout << va.min() << endl;
    cout << va.max() << endl;
    cout << va.sum() << endl;

    valarray<int> c=va.apply(
        [](int x){
            return x+=1;
        }
    );

    em=va.cshift(3);// rotate array

    for(auto i:em){
        cout << i << " "; //4 ,5 ,6,1,2,3
    }cout << endl;
    
    for(auto i:c){
        cout << i << " ";
    }cout << endl;
}