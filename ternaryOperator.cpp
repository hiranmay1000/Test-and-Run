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
    int a = 2;
    int b = 2;
    int c = 2;

    int t1 = a * b, t2 = b * c, t3 = a * c;

    int ans = (t1 > t2 && t1 > t3)   ? t1
              : (t2 > t1 && t2 > t3) ? t2
              : (t3 > t1 && t3 > t2) ? t3
              : (t1 == t3)           ? t1
                                     : 0;

    cout << ans;

    return 0;
}