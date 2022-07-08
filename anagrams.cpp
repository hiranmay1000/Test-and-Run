#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    bool isPresent;
    for (int i = 0; i < n; i++)
    {
        string p;
        string q;
        cin >> p >> q;
        cin.ignore();

        bool isPresent = false;

        if (p.compare(q))
        {
            isPresent = true;
        }
        else
            isPresent = false;
    }

    if (isPresent == true)
    {
        cout << "true" << endl;
    }
    else if (isPresent = false)
        cout << "false" << endl;
}