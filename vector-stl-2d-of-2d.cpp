#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> a(4, vector<int>(6, 1));

    for (auto it : a)
    {
        for (auto it2 : it)
        {
            cout << it2 << " ";
        }
        cout << endl;
    }
    return 0;
}
