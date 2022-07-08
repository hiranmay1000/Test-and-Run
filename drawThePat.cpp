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
    int sides;
    cin >> sides;

    for (size_t i = 0; i < sides; i++)
    {
        for (size_t i = 0; i < sides; i++)
        {
            for (int i = 0; i < sides; i++)
            {
                for (int j = 0; j < sides; j++)
                {
                    cout << " *";
                }
                cout << endl;
            }
        }
        cout << " ";
    }

    return 0;
}