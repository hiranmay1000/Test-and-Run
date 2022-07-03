#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printFun(vector<int> arr, int size)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1(3, 0);
    vector<int> v2(3, 10);

    // Copy the entire vector into v3
    vector<int> v3(v1); // other way to copy vector
    vector<int> v4 = {1, 4, 2, 3, 5};
    sort(v4.begin(), v4.end());
    vector<int> v5(v4.begin() + 1, v4.end() - 1); // 4, 2, 3
    vector<int> v6(v2.begin(), v2.end());

    printFun(v5, v5.size()); // both sizeof() and v3.size() functions are valid.
}