#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 4, 3, 1, 5, 4};

    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (i)
    //     {
    //         cout << ",";
    //     }
    //     cout << v.at(i);
    // }

    for (auto it : v)
    {
        if (it - 1)
            cout << ",";
        cout << it;
    }

    return 0;
}