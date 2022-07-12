#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s = "he110 w0r1d";
    char w = '-';
    int count = 0;
    // getline(cin, str);
    // cin >> w;

    for (size_t i = 0; i < count; i++)
    {
        cout << w;
    }

    for (int i = 0; i < s.size(); i++)
    { 
        if (isdigit(s.at(i)))
        {
            cout << s.at(i);
            count++;
        }
    }

    for (size_t i = 0; i < count; i++)
    {
        cout << w;
    }

    return 0;
}