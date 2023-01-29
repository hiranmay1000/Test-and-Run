#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    array<int, 4> arr = {2, 1, 4, 3};

    for (int i = 0; i < arr.size() ; i =  i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }

    for (auto i : arr)
    {
        cout << i << " "; // 1, 2
    }

    return 0;
}