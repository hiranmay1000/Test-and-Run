#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(4);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);

    for (auto i : v)
    {
        cout << i << " ";
    }

    cout << "Size of vector is -> " << v.size() << endl; // size function

    cout << "Binary search -> " << binary_search(v.begin(), v.end(), 4) << endl;

    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 1) - v.begin() << endl;
    cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 1) - v.begin() << endl;
    // .........................................................................

    int a = 2;
    int b = 1;

    swap(a, b); // swap function

    cout << a << endl
         << b << endl;

    cout << "Max -> " << max(a, b) << endl; // max function
    cout << "Min -> " << min(a, b) << endl; // min function

    string name = "Seeker";

    transform(name.begin(), name.end(), name.begin(), ::toupper);
    reverse(name.begin(), name.end());

    cout << name << endl;

    // rotate vector

    rotate(v.begin(), v.begin() + 1, v.end());

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end()); // intro short -> made with >> in sort >quick sort >> insersion sort
    // after applying sort function
    cout << "After sort -> ";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}