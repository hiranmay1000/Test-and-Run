#include <iostream>
using namespace std;

int main()
{
    char s[] = "Legend";
    int start = 0;
    int n = sizeof(s);
    int end = n - 1;

    for (size_t i = 0; s[i] != '\0'; i++)
    {
        swap(s[start], s[end]);
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << s[i];
    }

    return 0;
}