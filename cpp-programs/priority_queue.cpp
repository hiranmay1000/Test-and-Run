#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> max;

    priority_queue<int, vector<int>, greater<int>> min; // not understood :(

    max.push(1);
    max.push(4);
    max.push(2);
    max.push(3);

    int size = max.size();

    // printing maximum value at the top that means maximum value is always in the priority list
    cout << "Maximum values are in the priority list: ";
    for (size_t i = 0; i < size; i++)
    {
        cout << max.top() << " ";
        max.pop(); // deleted all the elements
    }
    cout << endl;
    cout << "Is queue empty? -> " << max.empty() << endl; // yes

    // .............................................................
    min.push(1);
    min.push(4);
    min.push(2);
    min.push(3);

    int min_size = min.size();

    cout << "Minimum values are in the priority list: ";
    for (size_t i = 0; i < min_size; i++)
    {
        cout << min.top() << " ";
        min.pop(); // deleted all the elements
    }
    cout << endl;
    cout << "Is queue empty? -> " << min.empty() << endl; // yes

    return 0;
}