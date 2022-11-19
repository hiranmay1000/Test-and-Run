#include <array>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> a;

    vector<int> x;
    // x.push_back(1);
    // x.push_back(2);
    x.push_back(3);
    //
    vector<int> y;
    y.push_back(10);
    y.push_back(20);
    // y.push_back(30);
    //
    vector<int> z;
    z.push_back(11);
    // z.push_back(22);
    z.push_back(33);
    //
    vector<int> k;
    k.push_back(101);
    k.push_back(202);
    k.push_back(303);
    //
    a.push_back(x);
    a.push_back(y);
    a.push_back(z);
    a.push_back(k);

    // for (auto vctr : a)
    // {
    //     for (auto it : vctr)
    //     {
    //         cout << it << " ";
    //     }
    //     cout << endl;
    // }

    // Traditional way
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}