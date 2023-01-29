#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4,5}; // 321 654 987 10
    int n = arr.size();
    int k=3;

    auto start=arr.begin();
    auto end=start+k;

    while(end<arr.end()){
        reverse(start, end);
        start=end;
        end=start+k;
    }

    reverse(start, arr.end());

    for(auto i:arr){
        cout << i << " ";
    }

    cout << endl;

    return 0;
}