#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    // cin >> str;
    getline(cin, str);

    // this method is easier
    char isNum[99];

    size_t i = 0;
    for (; i < str.size(); i++)
    {
        if (isdigit(str[i])) // cheking if numeric is present or not using inbuilt function isdigit()
        {
            cout << str[i];
        }
    }

    // this is another method slighty more complex

    str = str.substr(i, str.length() - i);

    int num = atoi(str.c_str());

    // Example string
    std::string str = "this is my id 4321.";

    // For atoi, the input string has to start with a digit, so lets search for the first digit
    size_t i = 0;
    for (; i < str.length(); i++)
    {
        if (isdigit(str[i]))
            break;
    }

    // remove the first chars, which aren't digits
    str = str.substr(i, str.length() - i);

    // convert the remaining text to an integer
    int id = atoi(str.c_str());

    // print the result
    std::cout << id << std::endl;

    return 0;
}