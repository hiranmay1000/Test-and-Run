#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// You must return the letter closest to the average ASCII value of the letters making up the input string S.
// answer is coming wrong
int main()
{
    cout << "Printing ascii value of each char \n";
    string str = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 26; i++)
    {
        int ch = str.at(i);                      // getting ascii value of each char and typecasting it into integer
        cout << str.at(i) << "->" << ch << endl; // printing the integer in chronological order
    }

    // find nearest char to the average ascii value of string
    string s;
    getline(cin, s);

    char c;
    int sum = 0;
    int size = s.size();

    for (int i = 0; i < size; i++)
    {
        int ch = s.at(i);
        sum += ch;
    }

    int avg = sum / size; // average only can be calculated below this above for loop / because I think sum is
    cout << "sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    for (int i = 0; i < size; i++)
    {
        int ch = s.at(i);
        if (avg >= ch) // comparing average value with minimum or equal ASCII value present in the string
        {
            c = ch; // put ASCII value into char 'c'
        }

        // c = (avg >= ch) ? ch = c : 0; // this approach will not work
    }

    cout << "nearest character: " << c << endl; // printing the ans
}