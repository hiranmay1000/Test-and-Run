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
    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        int x;
        cin >> x;
        cin.ignore();

        int j = 0;
        while (x != 0)
        {
            int bit = x % 2; // get bit
            ans = bit + (ans * j); // push the bit into right side
            x /= 2; // update x
            j++; // increament
        };
        cout << "Ans is: " << ans << " ";
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
}