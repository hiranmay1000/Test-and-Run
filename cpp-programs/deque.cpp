#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> a;

    a.push_back(1);
    a.push_back(2);

    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    deque<int> b;

    b.push_front(0);
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    b.push_back(5);
    b.push_front(-1);
    b.push_front(-2);
    b.push_back(4 - 2);

    // printing all the elements in the queue (p.s = another method of printing values)
    for (int i = 0; i < b.size(); i++)
    {
        cout << b.at(i) << " ";
    }
    cout << endl;
    cout << b.size() << endl;

    // removing perticular elements
    b.erase(b.begin()); // form from index to next assigned index
    cout << "Doubly ended queue after removing perticular element in the queue -> ";
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    // clearing all the element in the queue
    cout << "Doubly ended queue after deleting all the elements in the queue -> ";
    b.clear();
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
