#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Seeker ");
    q.push("Programming ");
    q.push("& ");
    q.push("Coding ");

    cout << "Front -> " << q.front() << endl;
    cout << "End -> " << q.back() << endl;

    q.pop();

    cout << "First -> " << q.front() << endl;

    q.empty();

    cout << "Is queue empty -> " << q.empty() << endl;

    q.swap(q.front(), q.back()); // not understood :(

    return 0;
}