#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
    /*array<int, 3> a = {1, 2, 4};

    int size = a.size();

    for (size_t i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    cout << endl
         << endl;

    cout << a.at(2) << endl;
    cout << a.max_size() << endl;
    cout << a.empty() << endl; // returns bool

    cout << a.front() << endl; // first ele
    cout << a.back() << endl;  // last ele*/
    // ....................................................
    /*
        // VECTOR

        vector<int> b;

        cout << "Capacity -> " << b.capacity() << endl; // prints the capacity of the array
        b.push_back(1);
        b.push_back(2); // add element in the last
        cout << "Capacity -> " << b.capacity() << endl;
        b.push_back(3);
        cout << "Capacity -> " << b.capacity() << endl;
        cout << "size -> " << b.size() << endl;
        b.push_back(4);
        cout << "Capacity -> " << b.capacity() << endl;
        cout << "Size -> " << b.size() << endl; // prints size of the array
        b.push_back(5);
        cout << "Capacity -> " << b.capacity() << endl;
        cout << "Size -> " << b.size() << endl; // prints size of the array
        b.push_back(6);
        cout << "Capacity -> " << b.capacity() << endl;
        cout << "Size -> " << b.size() << endl; // prints size of the array
        cout << endl;

        cout << "Array -> ";
        for (int i : b)
        {
            cout << i << " ";
        }
        cout << endl;

        cout << "Array after pop operation -> ";

        b.pop_back();
        for (int i : b)
        {
            cout << i << " ";
        }
        cout << endl;

        vector<int> first(b);
        cout << "Array -> ";
        for (int i : first)
        {
            cout << i << " ";
        }
        cout << endl;

        cout << "Array after at operation (index[0]) -> " << b.at(0) << endl; // find elements in the given position
        cout << "First element -> " << b.front() << endl;
        cout << "Last element -> " << b.back() << endl; // basic stack operation is executing
        cout << "Capacity -> " << b.capacity() << endl;
        cout << "Array after clear operation -> ";
        b.clear(); // Deleting all the present elements in the array
        for (int i : b)
        {
            cout << i << ' ';
        }*/
    // ..........................................................................
    vector<int> v(5, 1);

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
