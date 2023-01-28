#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
using namespace std;

void printFunction(vector<int> v, int size)
{
    cout << "Ascending order: ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

// If we declare globally
//  max array size (10^7) int main
// int arr[10000000];
// max array size (10^8);
// bool arr[100000000];

int main()
{
    // max array size (10^6) int main
    // int arr[1000000];
    // max array size (10^7);
    // bool arr[10000000];
    vector<int> v = {1, 4, 5, 6, 2, 3}; 
    
    sort(v.begin(), v.end());

    printFunction(v, v.size());

    return 0;
}