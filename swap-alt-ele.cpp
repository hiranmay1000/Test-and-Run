#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    array<int, 5> arr = {2, 1, 4, 3, 5};
    int size = arr.size();

    cout << "Array before alternate sorting ->";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < size; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }

    cout << endl << "Array after alternate sorting ->";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}