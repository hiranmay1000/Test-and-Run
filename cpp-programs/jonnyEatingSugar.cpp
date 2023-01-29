// Figure out how much sugar Johny ate, given the time he took in seconds and the speed he ate it at in grams per minute.
// Example : If time is 30 and speed is 20, you need to output 10.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int time;
    cin >> time;
    cin.ignore();
    int speed;
    cin >> speed;
    cin.ignore();

    int temp = speed + time;

    int gram = speed * time;

    int ans = gram - temp;

    cout << ans << endl;
}