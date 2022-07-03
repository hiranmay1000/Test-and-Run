#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> a(3, vector<int>(2, 1));
    a.push_back(vector<int>(1, 0));
    
    for (auto it : a)
    {
        for (auto its : it)
        {
            // for (auto it3 : its)
            // {
            cout << its << " ";
            // }
            // cout << endl;
        }
        cout << endl;
    }
    return 0;
}