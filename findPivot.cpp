#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={5,5,5,0,1,2,5};

    int n=arr.size();

    int s=0; 
    int e=n-1;
    
    int mid=s+(e-s)/2;

    if(arr[0]<arr[e]){
        cout << 0 ;
    }

    cout << endl;

    while(s<e){
        if(arr[s]==arr[mid]){
            cout << mid;
            break;
        }
        if(arr[0]>arr[mid]){
            e=mid-1;
        }else {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }

    cout << endl;
}