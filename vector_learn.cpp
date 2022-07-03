#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printFun(vector<int> const &a, int dsg4tgsdsfgw43ge)
{
    cout << "Output are -> ";
    for (int i = 0; i < dsg4tgsdsfgw43ge; i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    int rows = 3;
    int col = 3;
    vector<vector<int>> a = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};


    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << a.size();

    return 0;
}
