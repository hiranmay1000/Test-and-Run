#include <iostream>
#include <map> //complexity -> o(log n);
#include <string.h>
using namespace std;

int main()
{
    map<int, string> s; // sorted array

    s[3] = "Coding";
    s[1] = "Seeker,";
    s[0] = "Hello";
    s[2] = "Programming &";

    for (auto i : s)
    {
        cout << i.first << " " << i.second << endl;
    }

    s.erase(0);

    cout << "After erasing -> " << endl;
    for (auto i : s)
    {
        cout << i.second << endl;
    }

    auto it = s.find(1); // creating iterator
    cout << "After finding: ";
    for (auto i = it; i != s.end(); i++)
    {
        cout << (*i).second << " ";
    }
    cout << endl;

    auto itr = s.find(3);                            // again made a iterator
    auto i = itr;                                    // we cannot directly print so we assign 'itr' into 'i'
    cout << "Another one -> " << (*i).second << " "; // finding specific position

    return 0;