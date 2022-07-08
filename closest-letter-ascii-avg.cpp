#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// You must return the letter closest to the average ASCII value of the letters making up the input string S.

using namespace std;
int main()
{
    string s;
    getline(cin, s);

    char c;
    int sum = 0;
    int size = s.size();
    int avg = sum / size;
    for (int i = 0; i < s.size(); i++)
    {
        int ch = s.at(i);
        cout << ch << endl;
        sum += ch;
        cout << "[" << i << "]"
             << "->" << sum << endl;
        c = ch;
    }
    cout << "Sum is: " << sum << endl;

    cout << "Average: " << avg << endl;
    cout << "String size: " << s.size() << endl;

    cout << c;

    // for(int i = 0; i < s.size(); i++){

    // }
}