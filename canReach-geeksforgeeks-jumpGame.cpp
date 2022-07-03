#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> a(4, vector<int>(6, 5));

    for (auto it : a)
    {
        for (auto its : it)
        {
            cout << its << " ";
        }
        cout << endl;
    }
    return 0;
}
