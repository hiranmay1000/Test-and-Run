#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(0);
    s.insert(3);
    s.insert(2);
    s.insert(5); // only prints one
    s.insert(5); // ignore the repeative element
    s.insert(5); // ignore the repeative element
    s.insert(4);

    // int n = std::iterator s.size();

    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    // printing after erasing one element
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // to check whether an element is present or not -> "count();"
    cout << "Is present? -> " << s.count(9) << endl; // returns bool

    // find element in a set
    set<int>::iterator itr = s.find(2);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}