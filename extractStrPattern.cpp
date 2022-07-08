#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    string w;
    // cin >> str;
    getline(cin, str);
    cin >> w;

    char isNum[99];
    int count = 0;

    size_t i = 0;
    for (; i < str.size(); i++)
    {
        if (isdigit(str[i])) // cheking if numeric is present or not using inbuilt function isdigit()
        {
            count++;
        }
    }

    for (size_t i = 0; i < count; i++)
    {
        cout << w;
    }

    for (int i = 0; i < count; i++)
    {
        if (isdigit(str[i]))
        {
            cout << str[i];
        }
    }

    for (size_t i = 0; i < count; i++)
    {
        cout << w;
    }

    return 0;
}