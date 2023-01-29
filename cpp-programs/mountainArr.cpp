#include <bits/stdc++.h>
using namespace std;


void peakIndexInMountainArray(vector<int>& arr) {

    int s = 0;
    int e = arr.size() - 1;
    int mid = s + ((e - s) / 2);
    int k = arr[mid];
    int index = 0;

    while(s<=e){
        if(arr.size()%2==0){
            index=mid-1;
        }        
        else {
            index=mid;
        }
        mid = s + ((e - s) / 2);
    }

    cout << index << endl;
    cout << mid<< endl;
    cout << k <<endl;
}

int main() {
    vector<int> v = { 1,10, 2, 0 };
    peakIndexInMountainArray(v);
    cout << endl;
}