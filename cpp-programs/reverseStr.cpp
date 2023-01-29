#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char str[100] = "Seeker";
    int size = strlen(str);
    int s = 0;
    int e = size - 1;

    int i = 0;
    while (str[i] != '\0')
    {
        swap(str[s], str[e]);

        s++;
        e--;
        i++;
    }

    int j = 0;
    while (str[j] != '\0')
    {
        cout << str[j] << " ";
        j++;
    }
    

    return 0;
}
