#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // q = 9, k = 4, kni = 3, r = 3, b = 2, p = 1;
    // price of each piece is $100

    int sum = 0;
    int i = 0;
    while (s.size() > i)
    {
        int ch = s.at(i);
        switch (ch)
        {
        case 'Q':
            sum = sum + 900;
        case 'K':
            sum = sum + 400;
        case 'N':
            sum = sum + 300;
        case 'R':
            sum = sum + 500;
        case 'B':
            sum = sum + 300;
        case 'P':
            sum = sum + 100;// KQNBR - why it printing (sum) more than necessary.
        }
        i++;
    }

    cout << sum << endl;

    return 0;
}