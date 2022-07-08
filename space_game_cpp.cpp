#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

//1st method
    for (int i = 0; i < 10; i++)
    {
        if (i) // simple conditional statement
        {
            cout << "-";
        }
        cout << (i + 1) * n;
    }

//2nd method
    for (int i = 1; i < 11; i++)
    {
        if (i != 1) // applying conditional statement
        {
            cout << '-';
        }
        cout << i * n;
    }

    
}