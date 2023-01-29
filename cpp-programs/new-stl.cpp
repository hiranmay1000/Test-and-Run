#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printFunction(vector<int> v, int size)
{
    cout << "Ascending order: ";
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void printReverse(vector<int> a, int size)
{
    cout << "Descending order: ";
    for (auto it = a.end() - 1; it != a.begin() - 1 ; it--)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v = {1, 4, 5, 6, 2, 3};
    sort(v.begin(), v.end());

    printFunction(v, v.size());
    printReverse(v, v.size());

    return 0;
}